#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string file1 = "file1.txt";
string file2 = "file2.txt";

void proverka(ifstream &in1, ifstream &in2);

int getFileSize(ifstream& file);

void exchangeContents(string& filename1, string& filename2);
