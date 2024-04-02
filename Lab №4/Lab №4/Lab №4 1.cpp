#include <iostream>

using namespace std;

float RingS(float R1, float R2)
{
    float S;
    S = 3.14 * (pow(R1, 2) - pow(R2, 2));
    return S;
}

int main2()
{
    for (int i = 0; i < 3; i++)
    {
        float R1, R2;
        cout << "Введите внешний радиус кольца: ";
        cin >> R1;
        if (cin.fail() or (R1 <= 0))
        {
            cout << "Ошибка ввода данных." << endl;
            cin.clear();
            cin.ignore(123, '\n');
            return 1;
        }
        cout << "Введите внутренний радиус кольца: ";
        cin >> R2;
        if (cin.fail() or (R2 <= 0))
        {
            cout << "Ошибка ввода данных." << endl;
            cin.clear();
            cin.ignore(123, '\n');
            return 1;
        }
        if (R1 > R2)
        {
            cout << "Площадь " << i + 1 << " кольца равна " << RingS(R1, R2) << endl;
        }
        else
        {
            cout << "Внешний радиус должен быть больше внутреннего." << endl;
            return 1;
        }
    }
    return 0;
}
