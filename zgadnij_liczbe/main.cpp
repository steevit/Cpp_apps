#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj! Pomyślałem sobie liczbe 1..100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    //cout << liczba << endl;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout << "Zgadnij jaka (to Twoja " <<ile_prob << " proba): ";
        cin >> strzal;

        if(strzal==liczba) cout << "Udało się! Wygrywasz" << endl;
        else if(strzal<liczba) cout << "To za mało" << endl;
        else if(strzal>liczba) cout << "To za dużo" << endl;
    }

    system("pause");
    return 0;
}
