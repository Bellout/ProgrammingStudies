//Qt
#include <QCoreApplication>
#include <QDebug>

//STD
#include <iostream>
#include "stdio.h"
#include <algorithm> // STL algorithms
#include <vector>
#include <unistd.h>
#include <term.h>

//LOCAL
#include "../src/iocontents.h"
#include "../src/chapter.h"
#include "../src/section.h"
#include "../src/subsection.h"
#include "../src/content.h"
#include "../src/contentslice.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* ----------------------------
     * MAIN VARIABLES             */

    // IO TO CONSOLE
    QTextStream stream_in(stdin);

    // SET UP MAIN CONTENT
    content main_content;
    main_content.displayAllContent();

    /* ----------------------------
     * CREATE MAIN GUIDE OBJECT:
     * DECIDE WHICH TYPE OF VIEWER
     * OBJECT TO CREATE
     * (function) content_guide():
     * -displays book title,
     * -asks user for display choice
    */

    // CREATE MAIN GUIDE OBJECT
    iocontents main_guide;
    // main_guide.showContentGuide();

    /* ---------------------------
     * CREATE contentSlice OBJECT
       CONTENT */

    int chp_number {1};
    QString chp_name {"one"};
    QVector<QString> sec_nms {
        "first subsection",
        "second subsection" };

    QMap<QString, QString> sec_map { 
        {"1.1", "first subsection"},
        {"1.2", "second subsection"}
        };


    contentSlice all_chapters_slice {"all_chapters"};
    qDebug() << "Slice name: " << all_chapters_slice.getName();
    main_guide.genericChoiceLoop(all_chapters_slice);



    section section_1 {sec_nms, sec_map};

    chapter chapter_1 {chp_number, chp_name, section_1};
    chapter_1.show_structure("section");
    

    /* ----------------------------
     * STL ALGORITHMS [ch32:p927] */

    QString chapter_name = "STL ALGORITHMS [ch32:p927]";
    QString chapter_uline(chapter_name.size(),'=');
    qDebug()<<chapter_uline;
    qDebug()<<chapter_name;

    /* -----------------------
     * SET ALGORITHMS [p947] */
    QString section_name = "SET ALGORITHMS [p947]";
    QString section_uline(section_name.size(),'-');
    qDebug()<<section_name;
    qDebug()<<section_uline;

    // QVector<QString> set_array = {
    //     "param1",
    //     "param2" };

    // unsigned int i;
    // for (i = 0; i<set_array.size(); ++i)
    //     cout<<i<<" - "<<set_array[i]<<"\n";


    /* ------------------
     * POINTERS [p179] */

    qDebug()<<"POINTERS [p179]";

    int v[] = {1, 2, 3, 4};
    qDebug()<<v;

    int *p1 = v; // pointer to intial element (implicit conversion)
    qDebug()<<p1;

//    qDebug()<<v[];
    qDebug()<<sizeof v; // bitsize
    qDebug()<<sizeof p1;

    // for (i=0; i!=4; ++i) {
    //     cout << v[i] <<"\n";
    // }



    /* --------- */

//    return a.exec();
    return 0;

//    int status = 0;
//    void exit(0);


}
