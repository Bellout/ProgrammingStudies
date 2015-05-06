#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "stdio.h"
#include <algorithm> // STL algorithms
//#include <array>
#include <vector>
#include "../src/iocontents.h"
#include "../src/chapter.h"
#include "../src/section.h"
#include "../src/subsection.h"
#include <unistd.h>
#include <term.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* START GUIDE THROUGH CONTENT
     * (function) content_guide():
     * -displays book title,
     * -asks user for display choice
    */

    iocontents main_guide;
    main_guide.content_guide();

    /* ----------------------------
     * CHAPTER OBJECT             */

    int chp_number {1};
    string chp_name {"one"};
    vector<string> sec_nms {
        "first subsection",
        "second subsection" };
    map<string, string> sec_map { 
        {"1.1", "first subsection"},
        {"1.2", "second subsection"}
        };
    section section_1 {sec_nms, sec_map};

    chapter chapter_1 {chp_number, chp_name, section_1};
    chapter_1.show_structure("section");
    

    /* ----------------------------
     * STL ALGORITHMS [ch32:p927] */

    string chapter_name = "STL ALGORITHMS [ch32:p927]";
    string chapter_uline(chapter_name.size(),'=');
    cout<<chapter_name<<"\n";
    cout<<chapter_uline<<"\n";

    /* -----------------------
     * SET ALGORITHMS [p947] */
    string section_name = "SET ALGORITHMS [p947]";
    string section_uline(section_name.size(),'-');
    cout<<section_name<<"\n";
    cout<<section_uline<<"\n";

    vector<string> set_array = {
        "param1",
        "param2" };

    unsigned int i;
    for (i = 0; i<set_array.size(); ++i)
        cout<<i<<" - "<<set_array[i]<<"\n";


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

    for (i=0; i!=4; ++i) {
        cout << v[i] <<"\n";
    }



    /* --------- */

//    return a.exec();
    return 0;

//    int status = 0;
//    void exit(0);


}
