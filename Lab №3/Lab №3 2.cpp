#include <iostream>
#include <string>

using namespace std;

#define size 256

int main()
{
    setlocale(0, "");
    char n;
    char s[size];
    cout << "Введите текст: ";
    gets(s);
    if (cin.fail())
    {
        cout << "Ошибка ввода данных" << endl;
        return 1;
    }
    else
    {
        string a;
        cout << "Введите символ, который хотите удалить из текста: ";
        cin >> n;
        cout << endl;
        for (int i = 0; i < strlen(s); i++)
        {
            if ((s[i] != n) and (s[i] != n - 32))
            {
                a += s[i];
            }
        }
        cout << "Исходный текст: " << s << endl;
        cout << "Конечный текст: " << a << endl;
    }
    return 0;
}
