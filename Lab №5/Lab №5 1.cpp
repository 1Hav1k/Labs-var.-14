#include "Lab №5 1.hpp"

staff readperson()
{
    staff e;
    cin.ignore(1000,'\n');
    cout << "Введите информацию о сотруднике.\n" << endl;
    cout << "Фамилия И.О.: ";
    getline(cin, e.name);
    cout << "\n";
    cout << "Занимаемая должность: ";
    getline(cin, e.post);
    cout << "Год поступления на работу: ";
    cin >> e.year;
    cout << "\n";
    return e;
}

void printperson(staff e[], int a, int n)
{
    cout << "Введена информация о сотрудниках. \n" << endl;
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        if ((2024 - e[i].year) > a)
        {
            cout << "Фамилия И.О.: " << e[i].name << "\n";
            cout << "Занимаемая должность: " << e[i].post << "\n";
            cout << "Год поступления на работу: " << e[i].year << "\n";
            cout << "\n";
        }
        else
        {
            cout << "Стаж сотрудника должен быть больше введённого значения." << "\n";
            cout << "\n";
        }
    }
}
