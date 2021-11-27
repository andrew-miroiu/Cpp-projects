#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char c[]="EXAMEN";
    int x  = strlen(c);
    for(int  i=0; i<x/2; i++)
        cout<<c[i]<<c[x-1-i];

    return 0;
}
