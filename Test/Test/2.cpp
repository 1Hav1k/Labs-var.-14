#include <iostream>
#include <math.h>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
    int x;
    cout << "Введите значение x: ";
    cin >> x;
    if (cin.fail()) {
        cout << "Ошибка ввода данных" << endl;
        system("PAUSE");
    }
    else
    {
        if (x < 2) {
            int y = (6 * sin(x) - pow(x, 2)) / 3;
            cout << "Так как x меньше 2, то считаем y по первому выражению." << endl;
            cout << "Значение y равно " << y << endl;
        }
        else if (x >= 2 and x < 4)
        {
            int y = (exp((3 * x) - cos(2 * x))) / (3 + 4 * pow(x, 6));
            cout << "Так как x больше либо равен 2 и меньше 4, то считаем y по второму выражению." << endl;
            cout << "Значение y равно " << y << endl;
        }
        else if (x >= 4)
        {
            int y = pow((6 * pow(x, 3) - 4 * tan(x + 1)), 1./5.);
            cout << "Так как x больше либо равен 4, то считаем y по третьему выражению." << endl;
            cout << "Значение y равно " << y << endl;
        }
    }
    system("PAUSE");
    return 0;
}