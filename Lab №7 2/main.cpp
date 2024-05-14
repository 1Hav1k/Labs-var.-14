#include "header.h"

int main()
{
    LinkedList* list = createlist();
    
    int size;
    cout << "Введите размер списка: ";
    cin >> size;
    
    if (size <= 0)
    {
        cout << "Ошибка ввода данных." << endl;
        return 1;
    }
    
    proverka(size);
    
    cout << endl;
    cout << "Введите элементы списка: " << endl;
    for (int i = 0; i < size; ++i)
    {
        int value;
        
        cout << "Введите " << i + 1 << " элемент списка: ";
        cin >> value;
        proverka(value);
        
        addValue(list, value);
    }
    cout << endl;
    cout << "Элементы исходного списка: ";
    printlist(list);
    
    deleteElems(list);
    
    cout << "Элементы изменённого списка: ";
    printlist(list);
    
    deletelist(list);
    
    return 0;
}
