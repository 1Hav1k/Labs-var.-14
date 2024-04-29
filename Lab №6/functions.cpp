#include "header.hpp"

void proverka(ifstream& file1, ifstream& file2)
{
    if (!file1.is_open() || !file2.is_open())
    {
        cout << "Ошибка открытия файлов." << endl;
        exit(1);
    }

    if (file1.eof())
    {
        cout << "Файл 1 пустой." << endl;
        exit(1);
    }

    if (file2.eof())
    {
        cout << "Файл 2 пустой." << endl;
        exit(1);
    }
}

int getFileSize(ifstream& file)
{
    file.seekg(0, ios::end);
    int size = file.tellg();
    file.seekg(0, ios::beg);
    return size;
}

void exchangeContents(string& filename1, string& filename2)
{
    ifstream file1(filename1);
    ifstream file2(filename2);

    proverka(file1, file2);

    int size1 = getFileSize(file1);
    int size2 = getFileSize(file2);

    char* buffer1 = new char[size1];
    char* buffer2 = new char[size2];

    file1.read(buffer1, size1);
    file2.read(buffer2, size2);

    file1.close();
    file2.close();

    ofstream outFile(filename2, ios::trunc);
    outFile.write(buffer1, size1);
    outFile.close();

    outFile.open(filename1, ios::trunc);
    outFile.write(buffer2, size2);
    outFile.close();

    cout << "Обмен данными между файлами 1 и 2 закончен." << endl;

    delete[] buffer1;
    delete[] buffer2;
}
