#ifndef SECTION_H
#define SECTION_H

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
#include "subsection.h"

using namespace std;

class section
{
public:

    // section number
    int nsec;

    // section name
    QString name;

    // map of section content
    QMap<QString,QString> sec_map;

    // string vector of section content
    QVector<QString> sec_nms;

    // subsection object
    subsection subsec_vector;

    // section class constructor (empty)
    section();

    // section class constructor (using map)
    section(QMap<QString,QString> sec);

    // section class constructor (using vector)
    section(QVector<QString> sec);

    // section class constructor
    //(using both vector and map)
    section(QVector<QString> snms,
            QMap<QString, QString> smap);

    // chapter class destructor
    ~section();

    // show section structure
    void show_structure();
};

#endif // SECTION_H
