#include <iostream>
#include <fstream>

using namespace std;
ifstream f("input.txt");
ofstream g("output.txt");

int main()
{
    int a;
    int b;
    int c;
    int minim;
    f>>a>>b>>c;
    a=minim;
    if(b<minim)
    {
       b=minim;
    }
    if(c<minim)
    {
        c=minim;
    }
    g<<"Numarul minim este: "<<minim;

    f.close();
    g.close();
}
