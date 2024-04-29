#include "header.hpp"

void proverka(ifstream &in1, ifstream &in2)
{
    if (!in1 or !in2)
    {
        cout << "Ошибка открытия файлов." << endl;
        exit(1);
    }
    
    if (in1.eof())
    {
        cout << "Файл 1 пустой." << endl;
        exit(1);
    }

    if (in2.eof())
    {
        cout << "Файл 2 пустой." << endl;
        exit(1);
    }
}

void closefiles(ifstream &in1, ifstream &in2)
{
    in1.close();
    in2.close();
}

void file1to2(string file2, char* buffer1, int size1)
{
    ofstream outFile(file2, ios::trunc);
    outFile.write(buffer1, size1);
    outFile.close();
}

void file2to1(string file1, char* buffer2, int size2)
{
    ofstream outFile(file1, ios::trunc);
    outFile.write(buffer2, size2);
    outFile.close();
}
