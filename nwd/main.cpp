#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

long int nwd(int a, int b)
{
    if(b==0) return a;
    return nwd(b,a%b);
}

int main()
{
    fstream plik;
    plik.open("In0203.txt", ios::in);

    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje!";
        exit(0);
    }
    int m,n;
    plik >> m >> n;

    plik.close();

    plik.open("Out0203.txt", ios::out);
    plik << "NWD("<< m <<"," << n << ")=" << nwd(m,n) << endl;

    plik.close();

    return 0;
}
