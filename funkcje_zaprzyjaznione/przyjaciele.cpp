#include <iostream>
#include <string>
#include "przyjaciele.h"

using namespace std;

Punkt::Punkt(string n, float xx, float yy)
{
    nazwa = n;
    x = xx;
    y = yy;
}

void Punkt::wczytaj()
{
    cout << "Podaj x: "; cin >> x;
    cout << "Podaj y: "; cin >> y;
    cout << "Podaj nazwę punktu: "; cin >> nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy, float s, float w)
{
    nazwa = n;
    x = xx;
    y = yy;
    szerokosc=s;
    wysokosc=w;
}

void Prostokat::wczytaj()
{
    cout << "Podaj x lewego dolnego naroznika: "; cin >> x;
    cout << "Podaj y lewego dolnego naroznika: "; cin >> y;
    cout << "Podaj szerokość: "; cin >> szerokosc;
    cout << "Podaj wysokość: "; cin >> wysokosc;
    cout << "Podaj nazwę prostokąta: "; cin >> nazwa;
}
