#include "header.h"

struct ListNode   //Структура ListNode
{
    int data;
    ListNode* next;
};

struct LinkedList   //структура LinkedList
{
    ListNode* pBegin;
    ListNode* pEnd;
    int size;
};

LinkedList* createlist()      //функция типа LinkedList, создающая список
{
    auto list = new LinkedList();
    list -> pBegin = nullptr;
    return list;
};

ListNode* addValue(LinkedList* list, int value)  //функция добавления элемента в конец списка
{
    if (list == nullptr) return nullptr;
    auto pv = new ListNode();
    pv -> data = value;
    pv -> next = nullptr;
    if(list -> pEnd != nullptr)
    {
        list -> pEnd -> next = pv;
        list -> pEnd = pv;
    }
    else
    {
        list -> pBegin = list -> pEnd = pv;
    }
    return pv;
}

ListNode* insertBefore(LinkedList* list, ListNode* node, int value)     //функция добавления элемента перед узлом списка
{
    if (list == nullptr) return nullptr;
    auto pv = new ListNode();
    pv -> data = value;
    if (node == nullptr || node == list -> pBegin)
    {
        pv -> next = list -> pBegin;
        list -> pBegin = pv;
    }
    else
    {
        auto *cur = list -> pBegin;
        while (cur != nullptr && cur -> next != node) cur = cur -> next;
        if (cur != nullptr)
        {
            pv -> next = cur -> next;
            cur -> next = pv;
        }
    }
    return pv;
}

ListNode* insertAfter(LinkedList* list, ListNode* node, int value)   //функция добавления элемента в список после указанного узла
{
    if (list == nullptr) return nullptr;
    if (node == nullptr || node == list -> pEnd)
    {
        return addValue(list, value);
    }
    else
    {
        auto pv = new ListNode();
        pv -> data = value;
        pv -> next = node -> next;
        node -> next = pv;
        return pv;
    }
}

void deleteElems(LinkedList* list)      //функция удаления каждого второго элемента списка
{
    if (list == nullptr || list -> pBegin == nullptr) return;
    
    auto cur = list->pBegin;
    auto p = cur->next;
    
    while (p != nullptr)
    {
        cur -> next = p -> next;
        delete p;
        cur = cur->next;

        if (cur != nullptr)
        {
            p = cur -> next;
        } else
        {
            p = nullptr;
        }
    }
}

void printlist(LinkedList* list)           //функция вывода элементов списка
{
    if (list == nullptr || list -> pBegin== nullptr) return;
    auto cur = list -> pBegin;
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

void deletelist(LinkedList* list)     //функция удаления списка
{
    if (list == nullptr) return;
    auto cur = list -> pBegin;
    while (cur != nullptr)
    {
        auto p = cur;
        cur = cur -> next;
        delete p;
    }
    delete list;
}
