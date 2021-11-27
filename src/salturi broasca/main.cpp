#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
ifstream f("numere.in");
ofstream g("numere.out");

int main()
{
    int p,m;
    f>>p>>m;
    if(p>0 && m>=0)
    {
        g<<p*(pow(2,m)-1);
    }
    f.close();
    g.close();
    return 0;
}
