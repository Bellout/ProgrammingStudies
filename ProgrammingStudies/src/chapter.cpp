//Qt
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QVector>
#include <QMap>

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

    QMap<QString, int> string_map = {
        {"section",    1},
        {"subsection",  2}
    };

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

        for(auto const &it1 : sec_vector.sec_map.keys()) {
//            qDebug()<<"it1.first = "<<it1.first;
//            qDebug()<<"it1.second = "<<it1.second;
            qDebug()<<"it1.second = "<<sec_vector.sec_map.keys(it1);

        QVector<QString> keyQStringVector =
        {sec_vector.sec_map.keys()};
        qDebug()<<keyQStringVector;

//        keyQStringVector {}
        // for(auto const &it2 : it1.second) {
        //   // it2.first is the second key
        //   // it2.second is the data
        //   qDebug()<<"it2.first = "<<it2.first;
        //   qDebug()<<"it2.second = "<<it2.second;
        // }
}

        ctries = 4;
        break;

    case 2:

        ctries = 4;
        break;

    default:
        qDebug()<<"choose display depth (section or "
              "subsection): ";
        cin>>struct_depth;
        qDebug()<<"Chosen: "<<struct_depth;
        ++ctries;
    }
    }
}
