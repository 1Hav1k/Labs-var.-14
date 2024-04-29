#include "myfunctions.h"

int getIntInput()
{
 std::string str;
 
 bool flag = true;
 while (flag) {
  getline(std::cin, str);
  for (char ch : str) {
   if (isdigit(ch))
   {
    flag = false;
    
   }
   else {
    std::cout << "Ошибка ввода!\nВводимое значение должно быть целым положительным числом.\nПожалуйста, повторите попытку" << '\n';
    flag = true;
    break;
   }
   
  }
 }

 return stoi(str);
}

MARSH* CreateTraffic(int N)
{
 MARSH* TRAFFIC = new MARSH[N];
 for (int i = 0; i < N; i++) {
  TRAFFIC[i] = CreateMarsh();
 }
 return TRAFFIC;
}

MARSH CreateMarsh()
{
 
 MARSH route;
 
 std::cout << "Введите номер маршрута: ";
 int number = getIntInput();
 route.NUMBER = number;
 //std::cin.ignore(32767, '\n');
 std::cout << "Введите начальную станцию: ";  std::getline(std::cin, route.BEGST);
 std::cout << "Введите конечную станцию: ";  std::getline(std::cin, route.TERM);
 return route;
}

void PrintOne(MARSH marsh )
{
  
  std::cout << marsh.NUMBER << "         ";
  std::cout << marsh.BEGST << "          ";
  std::cout << marsh.TERM << "          ";
  std::cout << "\n";
}

void PrintAll(MARSH* TRAFFIC, int N) {
 std::cout << "Номер          Начальная          Конечная\n";
 for (int i = 0; i < N; i++) {
  PrintOne(TRAFFIC[i]);
 }
}

void SortTraffic(MARSH* &TRAFFIC, int N)
{
 for (int i = 0; i < N; i++)
 {
  for (int j = i + 1; j < N; j++) {
   if (TRAFFIC[i].NUMBER > TRAFFIC[j].NUMBER)
   {
    MARSH t = TRAFFIC[i];
    TRAFFIC[i] = TRAFFIC[j];
    TRAFFIC[j] = t;
   }
  }
 }
}

int SearchMarsh(MARSH* &TRAFFIC, int N, std::string item)
{
 for (int i = 0; i < N; i++)
 {
  if ((TRAFFIC[i].BEGST == item) || (TRAFFIC[i].TERM == item))
   return i;
 }
 return -1;
}