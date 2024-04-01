#include <iostream>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#define size 50

int main1()
{
    char s[size];
    char s1[size];
    cout << "Введите строку: ";
    gets(s);
    if (cin.fail())
    {
        cout << "Ошибка ввода данных" << endl;
        return 1;
    }
    else
    {
        cout << "Исходная строка: " << s << endl;
        for (int i = 0; i < strlen(s); i++)
        {
            s1[i] = tolower(s[i]);
        }
    }
    cout << "Конечная строка: " << s1 << endl;
    return 0;
}
