#pragma once
#include <string>
#include <iostream>

struct MARSH {
 int NUMBER;
 std::string BEGST;
 std::string TERM;
};

MARSH* CreateTraffic(int);

MARSH CreateMarsh();

void PrintOne(MARSH TRAFFIC);

void PrintAll(MARSH* TRAFFIC, int N);

int getIntInput();

int SearchMarsh(MARSH* &TRAFFIC, int N, std::string item);

void SortTraffic(MARSH* &TRAFFIC, int N);