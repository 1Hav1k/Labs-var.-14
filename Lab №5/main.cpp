#include "myfunctions.h"
int main()
{
    std::cout << "Введите количество маршрутов: " << '\n';

    int N = getIntInput();

    MARSH* TRAFFIC = CreateTraffic(N);

    SortTraffic(TRAFFIC, N);

    PrintAll(TRAFFIC, N);

    std::string item;

    std::cout << "Поиск маршрута по пункту отправления/назначения: "; std::cin >> item;

    int i = SearchMarsh(TRAFFIC, N, item);

    if (i != -1) { std::cout << "Маршрут найден!" << '\n'; PrintOne(TRAFFIC[i]); }
    else std::cout << "Такой маршрут не найден" << '\n';

    return 0;
}