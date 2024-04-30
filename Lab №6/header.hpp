#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void proverka(ifstream &in1, ifstream &in2);

int getFileSize(ifstream& file);

void exchangeContents(string& filename1, string& filename2);

void printFileContents(const string& filename);
