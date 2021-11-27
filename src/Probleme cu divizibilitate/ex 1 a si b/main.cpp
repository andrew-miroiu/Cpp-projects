#include <iostream>

using namespace std;
//1. Se citește de la tastatură un număr natural x. Se cere:
//a. Sa se afișeze mulțimea divizorilor săi și numărul de elemente ale mulțimii.
//b. Să se calculeze suma divizorilor unui număr

int main()
{
    int x,d,i=0,s;
    cout<<"x= ";
    cin>>x;
    cout<<"{";

    for(d=1; d<=x; d++)
    {
        if(x%d==0)
        {
            cout<<d<<", ";
            i++;
            s=s+d;
        }
    }

    cout<<"}"<<endl;
    cout<<"Numarul de elemente din multimea divizorilor= "<<i<<endl;
    cout<<"Suma divizorilor= "<<s<<endl;
    return 0;
}
