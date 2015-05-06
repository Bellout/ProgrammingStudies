#ifndef SECTION_H
#define SECTION_H
#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include "subsection.h"

using namespace std;

class section
{
public:

    // section number
    int nsec;

    // section name
    string name;

    // map of section content
    map<string,string> sec_map;

    // string vector of section content
    vector<string> sec_nms;

    // subsection object
    subsection subsec_vector;

    // section class constructor (empty)
    section();

    // section class constructor (using map)
    section(map<string,string> sec);

    // section class constructor (using vector)
    section(vector<string> sec);

    // section class constructor
    //(using both vector and map)
    section(vector<string> snms,
            map<string, string> smap);

    // chapter class destructor
    ~section();

    // show section structure
    void show_structure();
};

#endif // SECTION_H
