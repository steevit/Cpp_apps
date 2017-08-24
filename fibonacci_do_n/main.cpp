#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int licznik = 0;

long int fib(int n)
{
    licznik++;
    if(n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}

int main()
{
    fstream plik;
    plik.open("In0201.txt", ios::in);

    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje!";
        exit(0);
    }
    int n;
    plik >> n;

    plik.close();

    plik.open("Out0201.txt", ios::out);
    plik << "n=" << n << endl;

     for(int i=1;;i++)
     {
        if(fib(i)<=n)
        {
            plik << fib(i) << ", " << endl;
        }
     }

     plik.close();

    return 0;
}
