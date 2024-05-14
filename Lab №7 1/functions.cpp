#include "header.h"

struct PNode   //Структура PNode
{
    int data;
    PNode* next;
};

struct TStack   //структура TStack
{
    PNode* Top;     //это и будет *p1
    int size;
};

TStack* createstack()      //функция типа TStack, создающая стек
{
    auto stack = new TStack();
    stack -> Top = nullptr;
    return stack;
};

bool StackIsEmpty(TStack* stack)     //функция, возвращающая разное логическое значение в зависимости от пустоты стека
{
    return (stack == nullptr);
}

int Peek(TStack* stack)      //функция, возвращающая значение вершины непустого стека
{
    if (stack == nullptr || stack -> Top == nullptr)
    {
        cout << "Стек пустой" << endl;
        return 1;
    }
    else
    {
        return (stack -> Top -> data);
    }
}

int pop(TStack* stack)    //функция удаления элемента из стека (не пригодилась в данной задаче)
{
    if (stack == nullptr)
    {
        cout << "Стек пустой." << endl;
        return 1;
    }
    else
    {
        int value = stack -> Top -> data;
        stack -> Top = stack -> Top -> next;
        return value;
    }
}

PNode* push(TStack* stack, int value)   //функция добавления элемента в стек
{
    return insertBefore(stack, stack -> Top, value);
}

PNode* insertBefore(TStack* stack, PNode* node, int value)     //функция добавления элемента перед узлом списка(стека)
{                                                              //используется для функции добавления элемента в стек
    if (stack == nullptr) return nullptr;
    auto pv = new PNode();
    pv -> data = value;
    if (node == nullptr || node == stack -> Top)
    {
        pv -> next = stack -> Top;
        stack -> Top = pv;
    }
    else
    {
        auto *cur = stack -> Top;
        while (cur != nullptr && cur -> next != node) cur = cur -> next;
        if (cur != nullptr)
        {
            pv -> next = cur -> next;
            cur -> next = pv;
        }
    }
    return pv;
}

void printstack(TStack* stack)           //функция вывода элементов стека
{
    if (stack == nullptr || stack -> Top == nullptr) return;
    auto cur = stack -> Top;
    while (cur != nullptr)
    {
        cout << cur -> data << ' ';
        cur = cur -> next;
    }
    cout << endl;
}

void proverka(int v)            //функция проверки на ввод значений
{
    if (cin.fail() || cin.get() != '\n')
    {
        cout << "Ошибка ввода данных." << endl;
        cin.clear();
        cin.ignore(123,'\n');
        exit(1);
    }
}

void deletestack(TStack* stack)     //функция удаления стека
{
    if (stack == nullptr) return;
    auto cur = stack -> Top;
    while (cur != nullptr)
    {
        auto p = cur;
        cur = cur -> next;
        delete p;
    }
    delete stack;
}
