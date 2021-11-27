#include <iostream>
// 6) Să se scrie o funcţie care primeşte ca argumente două numere naturale a şi b şi returnează
// numărul de elemente din intervalul [a,b] care au cifra de control egală cu a.
using namespace std;

int sum(int n)
{
    int s;
    while(n>9)
    {
        s= 0;
        while(n>0)
        {
            s=s+n%10;
            =n/10;
        }
        n=s;
    }

    return s;
}

int main()
{
    int x;
    cout<<"x = ";
    cin>>x;
    cout<<"suma = "<<sum(x);
    return 0;
}
