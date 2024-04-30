#include "header.hpp"

int main()
{
    string docum1 = "file1.txt";
    string docum2 = "file2.txt";

    exchangeContents(docum1, docum2);

    cout << "Содержимое " << docum1 << " файла:" << endl;
    printFileContents(docum1);

    cout << "Содержимое " << docum2 << " файла:" << endl;
    printFileContents(docum2);

    return 0;
}
