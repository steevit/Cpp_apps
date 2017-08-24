#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>

using namespace std;

float x,y;
int wybor;

int main()
{

for(;;)
{
    cout << "Podaj 1 liczbe: ";
    if(!(cin >> x))
    {
        cerr << "To nie jest liczba!";
        break;
    }
    cout << "Podaj 2 liczbe: ";
    if(!(cin >> y))
    {
        cerr << "To nie jest liczba!";
        break;
    }

    cout << endl;
    cout << "MENU GŁÓWNE" << endl;
    cout << "------------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnożenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Wyjście z programu" << endl;

    cout << "Wybierz: ";
    cin >> wybor;

    switch(wybor)
    {
    case 1:
            cout << "Suma = " << x+y;
        break;
    case 2:
            cout << "Różnica = " << x-y;
        break;

    case 3:
            cout << "Iloczyn = " << x*y;
        break;

    case 4:
            if(y==0) cout << "Nie dzielimy przez 0!";
            else cout << "Iloraz = " << x/y;
        break;
    case 5:
            exit(0);
        break;

    default:
            cout << "Nie ma takiej opcji w menu!";
    }
    getchar(); getchar();
    system("clear");
}
    return 0;
}
