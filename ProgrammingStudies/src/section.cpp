//Qt
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QVector>
#include <QMap>

//STD
#include <iostream>
#include <stdio.h>
// #include <vector>
// #include <map>

//LOCAL
#include "section.h"

section::section()
{

}

section::section(QMap<QString,QString> sec)
{

}

section::section(QVector<QString> sec)
{

}

section::section(QVector<QString> snms,
            QMap<QString, QString> smap)
{

    sec_nms = snms;
    sec_map = smap;

}

section::~section()
{

}

void section::show_structure()
{


}
