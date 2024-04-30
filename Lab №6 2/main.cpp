#include "header.hpp"

int main()
{
    string inputFile = "pairs.txt";
    string outputFile = "processed_pairs.txt";
    int numPairs = 5;

    PairProcessing::createRandomTable(numPairs, inputFile);
    PairProcessing::processPairs(inputFile, outputFile);

    PairProcessing::printFileContents(inputFile);
    PairProcessing::printFileContents(outputFile);

    return 0;
}