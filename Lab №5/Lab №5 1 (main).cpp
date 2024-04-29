#include "Lab №5 1.cpp"

int main()
{
    int n;
    int a;
    cout << "Введите количество сотрудников: ";
    cin >> n;
    if ((cin.fail()) or (n <= 0))
    {
        cout << "Ошибка ввода данных." << endl;
        cin.clear();
        cin.ignore(123,'\n');
        return 1;
    }
    cout << "Введите, больше какого значения должен быть стаж работника: ";
    cin >> a;
    if ((cin.fail()) or (a <= 0))
    {
        cout << "Ошибка ввода данных." << endl;
        cin.clear();
        cin.ignore(123,'\n');
        return 1;
    }
    cout << "\n";
    staff person[sizeof(n)];
    for (int i = 0; i < n; i++)
    {
        person[i] = readperson();
    }
    printperson(person, a, n);
    return 0;
}
