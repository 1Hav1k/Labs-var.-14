#include "header.hpp"

void proverka1(ofstream& file)
{
    if (!file.is_open())
    {
        cerr << "Error opening file." << endl;
        return;
    }
}

void proverka2(ifstream& inputFile, ofstream& outputFile)
{
    if (!inputFile.is_open() || !outputFile.is_open())
    {
        cerr << "Error opening files." << endl;
        return;
    }

    if (inputFile.eof())
    {
        cerr << "Файл пустой." << endl;
        return;
    }
}

void PairProcessing::createRandomTable(int numPair, const string& filename)
{
    ofstream file(filename);
    
    proverka1(file);

    srand(time(NULL));
    for (int i = 0; i < numPair; ++i)
    {
        int n = rand() % 10 + 1;
        char c = 'a' + rand() % 26;
        file << n << " * " << c << ";";
    }

    file.close();
    cout << "Random table with " << numPair << " pairs has been created and written to " << filename << endl;
}

void PairProcessing::processPairs(const string& inputFilename, const string& outputFilename)
{
    ifstream inputFile(inputFilename);
    ofstream outputFile(outputFilename);
    
    proverka2(inputFile, outputFile);

    string line;
    getline(inputFile, line);
    inputFile.close();

    stringstream ss(line);
    int num;
    char c;
    while (ss >> num)
    {
        ss.ignore();
        ss.ignore();
        ss >> c;
        for (int i = 0; i < num; ++i)
        {
            outputFile << c;
        }
        char delim;
        ss >> delim;
        outputFile << endl; // Add delimiter between each string
    }

    outputFile.close();
    cout << "Processed pairs and written to " << outputFilename << endl;
}

void PairProcessing::printFileContents(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}
