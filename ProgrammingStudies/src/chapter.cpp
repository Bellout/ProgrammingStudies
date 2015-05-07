//Qt
#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <QString>
#include <QVector>
#include <QMap>
#include <QList>

//STD
#include <iostream>
#include <stdio.h>

//LOCAL
#include "chapter.h"
#include "section.h"

using namespace std;

chapter::chapter(int num, QString tlt, section sec)
{
    nchp = num ? num : 0;
    name = tlt;
    sec_vector = sec;
}


chapter::~chapter()
{

}

void chapter::show_structure(QString struct_depth)
{
    int    ctries {0};

    // IO TO CONSOLE
    QTextStream stream_in(stdin);

    //QMAP AND KEY VECTOR
    QMap<QString, int> string_map = {
        {"section",    1},
        {"subsection",  2}
    };
    QList<QString> keyQStringVector;
    QString substring {"1."};


    qDebug() << "struct_depth = " << struct_depth;

    while (ctries<4)
    {
    switch (string_map[struct_depth]){

    case 1:

        qDebug()<<"chapter number = "<<nchp;
        qDebug()<<"chapter name = "<<name;

        // VECTOR VALUES
        int i;
        for (i = 0; i<sec_vector.sec_nms.size(); ++i)
            qDebug()<<i<<" - "<<sec_vector.sec_nms[i];

        qDebug()<<"QMap.size() = "<<
        sec_vector.sec_map.size();

        qDebug()<<"QMap.count() = "<<
        sec_vector.sec_map.count("1");

        // QMap VALUES
        // QMap< QString, QMap<QString, QString> > myQMap

        foreach(QString key, sec_vector.sec_map.keys()){
            if(key.contains(substring))
                keyQStringVector.push_back(key);
        }
        qDebug()<<keyQStringVector;

        foreach(QString key, keyQStringVector){
            qDebug()<<sec_vector.sec_map[key];
        }

        ctries = 4;
        break;

    case 2:

        ctries = 4;
        break;

    default:
        qDebug()<<"choose display depth (section or "
              "subsection): ";
        struct_depth = stream_in.readLine();
//        cin>>struct_depth;
        qDebug()<<"Chosen: "<<struct_depth;
        ++ctries;
    }
    }
}
