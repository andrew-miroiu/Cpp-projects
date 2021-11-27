
#include <iostream>
#include <fstream>

using namespace std;
ifstream f("numere.in");
ofstream g("numere.out");

int main()
{
    int a;
    int b;
    int c;
    int minim;
    int maxim;
    f>>a>>b>>c;
    minim=a;
    if(b<minim)
    {
       minim=b;
    }
    if(c<minim)
    {
        minim=c;
    }

    maxim=a;
    if(b>maxim)
    {
        maxim=b;
    }
    if(c>maxim)
    {
        maxim=c;
    }

    g<<minim+maxim;

    f.close();
    g.close();
}
