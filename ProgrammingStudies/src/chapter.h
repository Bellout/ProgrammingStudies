#ifndef CHAPTER_H
#define CHAPTER_H
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
#include "subsection.h"

using namespace std;

class chapter
{

private:

    // number of sections:
    int nsec, nsubsec, nsubsubsec;
    //

public:

    // chapter number
    int nchp;

    // chapter name
    QString name;

    // section object
    section sec_vector;

    // chapter class constructor
    chapter(int num, QString tlt,
            section sec);

    // chapter class destructor
    ~chapter();

    // show chapter structure
    void show_structure(QString struct_depth);

};



#endif // CHAPTER_H


