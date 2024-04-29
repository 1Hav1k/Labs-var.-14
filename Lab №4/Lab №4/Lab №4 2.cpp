#include <iostream>

using namespace std;

int FindMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int main2()
{
    const int sizeX = 15;
    const int sizeY = 20;
    int X[sizeX], Y[sizeY];
    //cout << "Введите элементы массива X: ";
    for (int i = 0; i < sizeX; i++)
    {
        X[i] = rand() % 20 - 10;
    }
    cout << "Введите элементы массива Y: ";
    for (int i = 0; i < 20; i++)
    {
        Y[i] = rand() % 20 - 10;
    }
    cout << "Элементы массива X: ";
    for (int i = 0; i < 15; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
    cout << "Элементы массива Y: ";
    for (int i = 0; i < 20; i++)
    {
        cout << Y[i] << " ";
    }
    cout << endl;
    
    float a = FindMin(X, sizeX);
    float b = FindMin(Y, sizeY);
    if (a * b == 0)
    {
        cout << "Минимальные элементы не могут быть равны нулю." << endl;
        return 1;
    }
    else
    {
        float z = (a + b) / (a * b);
        cout << "Значение z равно: " << z << endl;
    }
    return 0;
}
