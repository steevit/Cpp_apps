#include <iostream>
#include <string>
#include "przyjaciele.h"

using namespace std;

void sedzia(Punkt &pkt, Prostokat &p)
{
    if((pkt.x>=p.x)&&(pkt.x<=p.x+p.szerokosc)
        &&(pkt.y>=p.y)&&(pkt.y<=p.y+p.wysokosc))
    cout << endl << "Punkt " << pkt.nazwa << " należy do prostokąta: " <<p.nazwa;
    else
    cout << endl << "Punkt " << pkt.nazwa << " leży POZA prostokątem: " <<p.nazwa;
}

int main()
{
    Punkt pkt1("A",3,2);
    //pkt1.wczytaj();
    Punkt pkt2("B",4,17);
    Prostokat p1("Prostokat 1",0,0,6,4);
    //p1.wczytaj();
    sedzia(pkt1,p1);
    sedzia(pkt2,p1);

    return 0;
}
