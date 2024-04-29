#include "Lab №5 2.hpp"

MARSH r(int N)
{
    MARSH TRAFIC[sizeof(N)] = {};
    cout << "Enter route information: \n";
    for(int i = 0; i < N; i++)
    {
        cout << "Beginning point: ";
        cin >> TRAFIC[i].BEGST;
        cout << "End point: ";
        cin >> TRAFIC[i].TERM;
        cout << "Route number: ";
        cin >> TRAFIC[i].NUMER;
        if ((cin.fail()) or (TRAFIC[i].NUMER <= 0))
        {
            cout << "Ошибка ввода данных." << endl;
            exit(1);
        }
    }
}

void out(MARSH TRAFIC, int N)
{
    cout << "Route information: \n";
    for(int i = 0; i < N; i++)
    {
        cout << "Beginning point: " << TRAFIC[i].BEGST << endl;
        cout << "End point: " << TRAFIC[i].TERM << endl;
        cout << "Route number: " << TRAFIC[i].NUMER << endl;
    }
}

void findR(MARSH TRAFIC, int routeNumber, int N)
{
    bool found = false;
    for(int i = 0; i < N; i++)
    {
        if (TRAFIC[i].NUMER == routeNumber)
        {
            cout << "Route " << routeNumber << " information:\n";
            cout << "Beginning point: " << TRAFIC[i].BEGST << endl;
            cout << "End point: " << TRAFIC[i].TERM << endl;
            found = true;
            break;
        }
    }
    if(!found) {
        cout << "Route with number " << routeNumber << " not found." << endl;
    }
}
