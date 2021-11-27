#include <iostream>

using namespace std;

int main()
{
    //Se citește de la tastatură un sir de numere pana la intalnirea lui 0. Sa se afiseze numai acele
    //numere care au prima cifra si ultima cifra egale!

         int x,a,b;
    cin>> x;
    while(x!=0)
    {
        b=0;
        a=x;
        while(a!=0)
        {
            b=b*10+a%10;
            a=a/10;
        }
        if(x%10==b%10)
        {
            cout<<x<<endl;
        }
        cout<<"x= ";
        cin>> x;
    }



    return 0;
}
