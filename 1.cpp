#include <iostream>
#include <math.h>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int x, y;
    cout << "Введите число x: ";
    cin >> x;
    if (cin.fail()) {
        cout << "Ошибка ввода данных" << endl;
        system("PAUSE");
    }
    else
    {
        cout << "Введите число y: ";
        cin >> y;
        if (cin.fail()) {
            cout << "Ошибка ввода данных" << endl;
            system("PAUSE");
        }
        else
        {
            int z = pow(y, 3) - 2 * pow(x, 2) + 7 * x * y - 4;
            cout << "Значение z равно " << z << endl;
        }
        
    }
    
    system("PAUSE");
    return 0;
}
