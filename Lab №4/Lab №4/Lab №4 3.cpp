#include <iostream>

using namespace std;

bool Palindrom(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    return Palindrom(str, start + 1, end - 1);
}

int main()
{
    string inputStr;
    for (int i = 0; i < 5; i++)
    {
        cout << "Введите строку: ";
        getline(cin, inputStr);
        if (cin.fail())
        {
            cout << "Ошибка ввода данных." << endl;
            cin.clear();
            cin.ignore(123, '\n');
            return 1;
        }
        else
        {
            if (Palindrom(inputStr, 0, inputStr.length() - 1))
            {
                cout << "Строка является палиндромом." << endl;
            }
            else
            {
                cout << "Строка не является палиндромом." << endl;
            }
        }
    }
    return 0;
}
