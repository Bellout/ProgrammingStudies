//Qt
#include <QDebug>
#include <QProcess>
#include <QTextStream>
#include <QString>
#include <QVector>
#include <QMap>
#include <QList>

//STD
#include <iostream>
#include <stdio.h>
// #include <vector>
#include <cstdlib>
#include <unistd.h>
#include <term.h>

//LOCAL
#include "../src/iocontents.h"
#include "../src/contentslice.h"

using namespace std;

iocontents::iocontents()
{
}

iocontents::~iocontents()
{

}

void iocontents::showAllChaptersList()
{

}


void iocontents::showContentGuide()
{

    clearScreen();
    showBookTitle();

    /* ----------------------------
     * ASK USER FOR DISPLAY CHOICE */
    askIfChapterDisplay();
}


void iocontents::genericChoiceLoop(
        contentSlice cSlice)
{
    // SCOPE VARS: CONST
    int ctries=1;
    QString answer = 0;

    // SCOPE VARS: IO TO CONSOLE
    QTextStream stream_in(stdin);
    QTextStream stream_out(stdout);

    // SCOPE VARS: QMAP AND KEY VECTOR
    QMap<QString, int> answer_map = {
        {"y",    1},
        {"yes",  1},
        {"n",  2},
        {"no",  2}
    };

    // GENERIC CHOICE LOOP
    while (ctries<4)
    {
        if(ctries==1){
        stream_out << "Display " << cSlice.getName()
        << "list ('y' or 'n')?\n" << flush;
        }

        qDebug()<<"(tries:"<<ctries<<"of 3)";

        if(ctries<4){
            answer = stream_in.readLine();
        }

        // qDebug()<<answer;

        switch (answer_map[answer]){

        case 1:
            showAllChaptersList();
            ctries=4;
            break;

        case 2:
            showAllChaptersList();
            ctries=4;
            break;

        default:
            ++ctries;
            if(ctries<4){
                stream_out<<
                "You must choose 'y' or 'n'. "
                "Try again...\n"<<flush;
            }else{
                stream_out<<
                "You have tried too many "
                "times. Displaying default"
                "view.\n"<<flush;
                showAllChaptersList();
                ctries=4;
            }

        }
    }
}


void iocontents::askIfChapterDisplay()
{
    // LOCAL VARIABLES
    int ctries=1;
    QString answer = 0;

    // IO TO CONSOLE
    QTextStream stream_in(stdin);
    QTextStream stream_out(stdout);

    //QMAP AND KEY VECTOR
    QMap<QString, int> answer_map = {
        {"y",    1},
        {"yes",  1},
        {"n",  2},
        {"no",  2}
    };

    // ASK FOR CHOICE
    while (ctries<4)
    {
        if(ctries==1){
        stream_out<<"Display chapter list ('y' or 'n')?\n"<<flush;
        }

        qDebug()<<"(tries:"<<ctries<<"of 3)";

        if(ctries<4){
            answer = stream_in.readLine();
        }

        // qDebug()<<answer;

        switch (answer_map[answer]){

        case 1:
            showAllChaptersList();
            ctries=4;
            break;

        case 2:
            showAllChaptersList();
            ctries=4;
            break;

        default:
            ++ctries;
            if(ctries<4){
                stream_out<<
                "You must choose 'y' or 'n'. "
                "Try again...\n"<<flush;
            }else{
                stream_out<<
                "You have tried too many "
                "times. Displaying chapter "
                "list.\n"<<flush;
                showAllChaptersList();
                ctries=4;
            }

        }
    }
}


void iocontents::showBookTitle()
{
    // IO TO CONSOLE
    QTextStream stream_out(stdout);

    /* ----------------------------
     * DISPLAY BOOK TITLE */
    QString book_title =
            "THE C++ PROGRAMING LANGUAGE, "
            "4ED [ch:1-44;p1347] -- "
            "BJARNE STROUSTRUP";
    QString book_uline(book_title.size(),'*');

    stream_out<<"\n"<<book_uline<<"\n";
    stream_out<<book_title<<"\n";
    stream_out<<book_uline<<"\n\n";
}


void iocontents::clearScreen()
{
    // LINUX
    QProcess::execute("clear");
    // WINDOWS
//    QProcess::execute("CLS");
}


