#include <iostream>
//Să se scrie o funcție C++ care primeşte doi parametri, n şi k şi returnează numărul de cifre ale lui n care divid pe k.

using namespace std;
int counter;
int nume(int n, int k)
{
    while(n!=0)
    {
        int cn=n%10;
        if(k%cn==0)
        {
            counter++;
        }
        n=n/10;
    }

    return counter;
}

int main()
{
    int a, b;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;

    cout<<"Counter = "<<nume(a, b);
    return 0;
}
