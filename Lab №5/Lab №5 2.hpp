#ifndef Lab__5_2_hpp
#define Lab__5_2_hpp

#include <iostream>

using namespace std;

struct MARSH
{
    string BEGST;
    string TERM;
    int NUMER;
};

void in(MARSH TRAFIC, int N);
void out(MARSH TRAFIC, int N);
void findR(MARSH TRAFIC, int routeNumber, int N);

#endif
