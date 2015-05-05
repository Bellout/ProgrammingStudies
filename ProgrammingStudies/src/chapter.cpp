#include <QCoreApplication>
#include <QDebug>
#include "chapter.h"
#include <stdio.h>

//using namespace std;

chapter::chapter(int num, string tlt, vector<string> sec)
{
    nchp = num ? num : 0;
    name = tlt;
    sec_nms = sec;


}

chapter::~chapter()
{

}

void chapter::show_structure(string struct_depth)
{
    int    ctries {0};

    map<string, int> string_map = {
        {"section",    1},
        {"subsection",  2}
    };

    cout<<"struct_depth = "<<struct_depth<<"\n";

    while (ctries<4)
    {
    switch (string_map[struct_depth]){

    case 1:

        cout<<"chapter number = "<<nchp<<"\n";
        cout<<"chapter name = "<<name<<"\n";
//        cout<<"chapter section names = "<<sec_nms<<"\n";
        unsigned int i;
        for (i = 0; i<sec_nms.size(); ++i)
            cout<<i<<" - "<<sec_nms[i]<<"\n";

        ctries = 4;
        break;

    case 2:

        ctries = 4;
        break;

    default:
        cout<<"choose display depth (section or "
              "subsection): ";
        cin>>struct_depth;
        cout<<"Chosen: "<<struct_depth<<"\n";
        ++ctries;
    }
    }
}
