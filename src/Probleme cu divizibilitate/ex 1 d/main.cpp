#include <iostream>

using namespace std;
//Să se determine dacă este număr perfect(un număr este perfect dacă este egal cu
//suma divizorilor săi mai mici decât el. Exemplu: nr x=6 este egal cu 1+2+3)

int main()
{
    int x,d,i,s=0;
    cout<<"x= ";
    cin>>x;
    cout<<"{";
    for(d=1; d<x; d++)
    {
        if(x%d==0)
        {
            cout<<d<<", ";
            s=s+d;
        }
    }

    cout<<"}"<<endl;

    if(x==s)
    {
        cout<<"Numarul "<<x<<" este numar perfect";
    }

    else
    {
        cout<<"Nu este nr. perfect";
    }

    return 0;
}
