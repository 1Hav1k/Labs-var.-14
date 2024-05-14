#include <iostream>

using namespace std;

struct ListNode;   //Структура ListNode
struct LinkedList;   //структура LinkedList

LinkedList* createlist();      //функция типа LinkedList, создающая список

ListNode* addValue(LinkedList* list, int value);  //функция добавления элемента в конец списка

ListNode* insertBefore(LinkedList* list, ListNode* node, int value);     //функция добавления элемента перед узлом списка
ListNode* insertAfter(LinkedList* list, ListNode* node, int value);  //функция добавления элемента в список после указанного узла

void deleteElems(LinkedList* list);      //функция удаления каждого второго элемента в списке

void printlist(LinkedList* list);           //функция вывода элементов списка

void proverka(int v);          //функция проверки на ввод значений

void deletelist(LinkedList* list);    //функция удаления списка
