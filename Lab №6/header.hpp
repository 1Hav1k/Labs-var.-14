#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string file1 = "file1.txt";
string file2 = "file2.txt";

void proverka(ifstream &in1, ifstream &in2);

void closefiles(ifstream &in1, ifstream &in2);

void file1to2(string file2, char* buffer1, int size1);
void file2to1(string file1, char* buffer2, int size2);
