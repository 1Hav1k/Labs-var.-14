#include "Lab №5 2.hpp"

int main() {
    int N;
    cout << "Введите количество маршрутов: ";
    cin >> N;
    
    MARSH TRAFIC[sizeof(N)] = {};
    
    r(TRAFIC, N);
    
    out(TRAFIC, N);
    
    int routeNumber;
    std::cout << "Enter route number to find: ";
    std::cin >> routeNumber;
    
    findRoute(TRAFIC, routeNumber);
    
    return 0;
}
