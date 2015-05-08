//Qt
#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <QString>
#include <QVector>
#include <QMap>
#include <QList>

//LOCAL
#include "content.h"

content::~content()
{

}

void content::displayAllContent(){
    // SCOPE VARS: IO TO CONSOLE
    QTextStream stream_out(stdout);
    stream_out.setFieldAlignment(QTextStream::AlignLeft);
    stream_out.setFieldWidth(0);

    // PRINT CONTENT TO CONSOLE
    foreach(QString key, main_map.keys()){
        stream_out << qSetFieldWidth(0) << key;
        stream_out << qSetFieldWidth(0) << " - ";
        stream_out << qSetFieldWidth(0) << main_map[key];
        stream_out << qSetFieldWidth(0) << "\n";
    }
}

content::content()
{

    // CHAPTER 01
    QMap<QString, QString> ch1_map {
        {"1.1", "first subsection"},
        {"1.2", "second subsection"}
    };

    // CHAPTER 02
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 04
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 05
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 06
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 07
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 08
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 09
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };

    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };
        	// 01 - 10
    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };
            main_map.unite(ch01_map);
    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };
            main_map.unite(ch02_map);
    // CHAPTER 03
    QMap<QString, QString> ch2_map {
        {"2.1", "third section"},
        {"2.2", "fourth section"}
        };
            main_map.unite(ch03_map);
    main_map.unite(ch04_map);
    main_map.unite(ch05_map);
    main_map.unite(ch06_map);
    main_map.unite(ch07_map);
    main_map.unite(ch08_map);
    main_map.unite(ch09_map);
    main_map.unite(ch10_map);
	// 11 - 20
    main_map.unite(ch11_map);
    main_map.unite(ch12_map);
    main_map.unite(ch13_map);
    main_map.unite(ch14_map);
    main_map.unite(ch15_map);
    main_map.unite(ch16_map);
    main_map.unite(ch17_map);
    main_map.unite(ch18_map);
    main_map.unite(ch19_map);
    main_map.unite(ch20_map);
	// 21 - 30    
    main_map.unite(ch21_map);
    main_map.unite(ch22_map);
    main_map.unite(ch23_map);
    main_map.unite(ch24_map);
    main_map.unite(ch25_map);
    main_map.unite(ch26_map);
    main_map.unite(ch27_map);
    main_map.unite(ch28_map);
    main_map.unite(ch29_map);    
    main_map.unite(ch30_map);
	// 31 - 40
    main_map.unite(ch31_map);
    main_map.unite(ch32_map);
    main_map.unite(ch33_map);
    main_map.unite(ch34_map);
    main_map.unite(ch35_map);
    main_map.unite(ch36_map);
    main_map.unite(ch37_map);
    main_map.unite(ch38_map);
    main_map.unite(ch39_map);    
    main_map.unite(ch40_map);
	// 41 - 44
    main_map.unite(ch41_map);
    main_map.unite(ch42_map);
    main_map.unite(ch43_map);
    main_map.unite(ch44_map);
}


