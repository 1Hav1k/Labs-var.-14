#include <iostream>

using namespace std;

struct PNode;   //Структура PNode
struct TStack;   //структура TStack

TStack* createstack();      //функция типа TStack, создающая стек

bool StackIsEmpty(TStack* stack);     //функция, возвращающая разное логическое значение в зависимости от пустоты стека

int Peek(TStack* stack);      //функция, возвращающая значение вершины непустого стека

int pop(TStack* stack);   //функция удаления элемента из стека (не пригодилась в данной задаче)

PNode* push(TStack* stack, int value);   //функция добавления элемента в стек

PNode* insertBefore(TStack* stack, PNode* node, int value);     //функция добавления элемента перед узлом списка(стека)
                                                                //используется для функции добавления элемента в стек
void printstack(TStack* stack);           //функция вывода элементов стека

void proverka(int v);          //функция проверки на ввод значений

void deletestack(TStack* stack);    //функция удаления стека
