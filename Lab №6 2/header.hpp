#ifndef PAIRS_HPP
#define PAIRS_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void proverka1(ofstream& file);
void proverka2(ifstream& inputFile, ofstream& outputFile);

namespace PairProcessing
{
    void createRandomTable(int numPairs, const string& filename);
    
    void processPairs(const string& inputFilename, const string& outputFilename);

    void printFileContents(const string& filename);
}

#endif
