#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int N;
    cout << "Введите размер массива: ";
    cin >> N;
    if ((cin.fail()) or (N < 1))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Ошибка ввода данных" << endl;
        return 1;
    }
    else
    {
        int A[N];
        int *p;
        p = &A[0];
        srand(time(NULL));
        cout << "Исходный массив: ";
        for (int i = 0; i < N; i++)
        {
            *(p + i) = rand() % 200 - 100;
            cout << *(p + i) << " ";
        }
        cout << endl;
        int count = 0;
        cout << "Номера элементов, больших своего правого соседа: ";
        for (int i = 0; i < N - 1; i++) {
            if (*(p + i) > *(p + i + 1)) {
                cout << i + 1 << " ";
                count++;
            }
        }
        cout << endl;
        if (count == 0) {
            cout << "Таких элементов нет" << endl;
        } else {
            cout << "Количество элементов, больших своего правого соседа: " << count << endl;
        }
        return 0;
    }
}
