#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main1()
{
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    if ((cin.fail()) or (n < 1))
        {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Ошибка ввода данных";
        return 1;
        }
    else {
        double *arr = new double[n];
        double *p = arr;
        double *min_element = arr;
        cout << "Исходный массив: ";
        srand(time(NULL));
        for (int i = 0; i < n; i++)
            {
                *(p + i) = (float)(rand()% 4 - 2) / (float)(rand()% 4 - 2);
                cout << *(p + i) << " ";
            if (*(p + i) < *min_element)
                {
                min_element = p + i;
                }
            }
        
        cout << endl;
        cout << "Номер минимального элемента: " << (min_element - arr) + 1 << endl;

        double *first_neg = nullptr;
        double *second_neg = nullptr;

        for (double *p = arr; p < arr + n; p++)
        {
            if (*p < 0)
            {
                if (first_neg == nullptr)
                {
                    first_neg = p;
                }
                else if (second_neg == nullptr)
                {
                    second_neg = p;
                    break;
                }
            }
        }

        if (first_neg == nullptr or second_neg == nullptr)
        {
            cout << "Недостаточно отрицательных элементов в массиве" << endl;
        }
        else
        {
            double sum = 0;
            for (double *p = first_neg + 1; p < second_neg; p++)
            {
                sum += *p;
            }
            cout << "Сумма элементов между первым и вторым отрицательными элементами: " << sum << endl;
        }

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(*(arr + i)) <= 1)
            {
                double temp = *(arr + j);
                *(arr + j) = *(arr + i);
                *(arr + i) = temp;
                j++;
            }
        }

        cout << "Новый массив: ";
        for (int i = 0; i < n; i++)
        {
            cout << *(arr + i) << " ";
        }

        delete[] arr;

        return 0;
    }

}
