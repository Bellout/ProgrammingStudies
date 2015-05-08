//Qt
#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <QString>
#include <QVector>
#include <QMap>
#include <QList>

//LOCAL
#include "../src/contentslice.h"

contentSlice::contentSlice(){
    slice_name = "empty";
}

contentSlice::contentSlice(QString sname){
        slice_name = sname;
}

contentSlice::~contentSlice(){

}

QString contentSlice::getName(){
    QString sname = slice_name;
    return sname;
}

void contentSlice::showAllContent(){
    QString sname = slice_name;
//    return sname;
}
