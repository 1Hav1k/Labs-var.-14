#include "header.hpp"

int main()
{
    string inputFile = "pairs.txt";
    string outputFile = "processed_pairs.txt";
    int numPairs = 5;

    PairProcessing::createRandomTable(numPairs, inputFile);
    PairProcessing::processPairs(inputFile, outputFile);

    cout << "Данные файла с случайными парами: ";
    PairProcessing::printFileContents(inputFile);
    cout << "Данные файла с обработанными парами:" << endl;
    PairProcessing::printFileContents(outputFile);

    return 0;
}