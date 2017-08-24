#include <iostream>
#include <time.h>
#include <unistd.h>
#include <cstdlib>
#include <string>

using namespace std;

int ile;
clock_t start,stop;
double czas;

void bubble_sort(int *tab, int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=n-1;j>=1;j--)
        {
            if(tab[j]<tab[j-1])
            {
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}

void quick_sort(int *tablica, int lewy, int prawy)
{
    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i= lewy;
    j= prawy;
    do
    {
        while(tablica[i]<v) i++;
        while(tablica[j]>v) j--;
        if(i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(j>lewy) quick_sort(tablica, lewy, j);
    if(i<prawy) quick_sort(tablica, i, prawy);
}

int main()
{
    cout << "Porównanie czasów sortowania v1" << endl;

    cout << "ile losowych liczb w tablicy: ";
    cin >> ile;

    //dynamiczna alokacja tablicy
    int *tablica;
    tablica = new int[ile];

    int *tablica2;
    tablica2 = new int[ile];

    //inicjowanie generatora
    srand(time(NULL));

    //wczytywanie losowych liczb do tablicy
    for(int i=0;i<ile;i++)
    {
        tablica[i] = rand()%100000+1;
    }

    //przepisanie tablicy do tablicy2
    for(int i=0;i<ile;i++)
    {
        tablica2[i]=tablica[i];
    }

//    cout << "Przed posortowaniem: " << endl;
//    for(int i=0;i<ile;i++)
//    {
//        cout << tablica[i] << " ";
//    }

    cout << "Sortuję teraz bąbelkowo. Proszę czekać!" << endl;

    start = clock();

    bubble_sort(tablica,ile);

    stop = clock();

    czas = (double)(stop-start) / CLOCKS_PER_SEC;

//    cout << "Po sortowaniu: " << endl;
//    for(int i=0;i<ile;i++)
//    {
//        cout << tablica[i] << " ";
//    }

    cout << endl << "Czas sortowania bąbelkowego: " << czas << " s" << endl;


    cout << "Sortuję teraz przez quicksort. Proszę czekać!" << endl;

    start = clock();

    quick_sort(tablica2, 0, ile-1);

    stop = clock();

    czas = (double)(stop-start) / CLOCKS_PER_SEC;

//    cout << "Po sortowaniu: " << endl;
//    for(int i=0;i<ile;i++)
//    {
//        cout << tablica[i] << " ";
//    }

    cout << endl << "Czas sortowania quicksort: " << czas << " s" << endl;



    delete [] tablica;
    delete [] tablica2;

    return 0;
}
