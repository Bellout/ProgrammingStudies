#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include "section.h"

section::section()
{

}

section::section(map<string,string> sec)
{

}

section::section(vector<string> sec)
{

}

section::section(vector<string> snms,
                 map<string, string> smap)
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
