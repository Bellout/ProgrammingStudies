#include <QCoreApplication>
#include <QDebug>
#include "chapter.h"
#include "section.h"
#include <stdio.h>

//using namespace std;

chapter::chapter(int num, string tlt, section sec)
{
    nchp = num ? num : 0;
    name = tlt;
    sec_vector = sec;
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

        unsigned int i;
        for (i = 0; i<sec_vector.sec_nms.size(); ++i)
            cout<<i<<" - "<<sec_vector.sec_nms[i]<<"\n";

        cout<<"map.size() = "<<
        sec_vector.sec_map.size()<<"\n";

        cout<<"map.count() = "<<
        sec_vector.sec_map.count("1")<<"\n";

// map< string, map<string, string> > mymap

for(auto const &it1 : sec_vector.sec_map) {
  // it1.first is the first key
    cout<<"it1.first = "<<it1.first;
    cout<<"it1.second = "<<it1.second<<"\n";

  // for(auto const &it2 : it1.second) {
  //   // it2.first is the second key
  //   // it2.second is the data
  //   cout<<"it2.first = "<<it2.first<<"\n";
  //   cout<<"it2.second = "<<it2.second<<"\n";
  // }
}

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
