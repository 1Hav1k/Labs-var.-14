#include "header.h"

int main()
{
    TStack* stack = createstack();
    
    int size;
    cout << "Введите размер стека: ";
    cin >> size;
    
    if (size <= 0)
    {
        cout << "Размер стека должен быть больше 0 и целым числом." << endl;
        return 1;
    }
    
    cout << endl;
    proverka(size);
    
    cout << "Введите элементы стека." << endl;
    for (int i = 0; i < size; i++)
    {
        int value;
        cout << "Введите " << i + 1 << " элемент стека: ";
        cin >> value;
        
        proverka(value);
        
        push(stack, value);
    }
    
    cout << endl;
    cout << "Элементы стека: ";
    
    printstack(stack);
    
    cout << endl;
    
    if (!StackIsEmpty(stack))
    {
        cout << "Стек пустой: FALSE" << endl;
        cout << "Значение вершины стека: " << Peek(stack) << endl;
    }
    else
    {
        cout << "TRUE";
        return 1;
    }

    deletestack(stack);
    
    return 0;
}
