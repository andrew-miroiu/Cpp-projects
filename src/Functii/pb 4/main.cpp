#include <iostream>
//13)	Să se scrie o funcție C++ care să returneze suma factorialelor cifrelor unui număr natural transmis ca parametru

using namespace std;

int suma;

int suma_fact(int n)
{

    while(n!=0)
    {
        int fact = 1;
        for(int i=1; i<=n%10; i++)
        {
            fact=fact*i;
        }
        suma+=fact;
        n/=10;
    }

    return suma;
}

int main()
{
    int a;
    cout<<"a= ";
    cin>>a;
    cout<<"Suma = "<<suma_fact(a);

    return 0;
}
