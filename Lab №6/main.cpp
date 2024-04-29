#include "header.hpp"

int main()
{
    ifstream in1(file1);
    ifstream in2(file2);

    proverka(in1, in2);

    in1.seekg(0, std::ios::end);      //создание памяти для файла 1
    int size1 = in1.tellg();
    in1.seekg(0, std::ios::beg);
    char* buffer1 = new char[size1];
    in1.read(buffer1, size1);
    
    in2.seekg(0, std::ios::end);      //создание памяти для файла 2
    int size2 = in2.tellg();
    in2.seekg(0, std::ios::beg);
    char* buffer2 = new char[size2];
    in2.read(buffer2, size2);

    closefiles(in1, in2);
    
    file1to2(file2, buffer1, size1);
    file2to1(file1, buffer2, size2);

    cout << "Обмен файлами произошёл успешно." << endl;

    delete[] buffer1;
    delete[] buffer2;

    return 0;
}
