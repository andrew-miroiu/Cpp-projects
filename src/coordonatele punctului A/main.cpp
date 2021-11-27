#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Scrie coordonatele lui x= ";
    cin>>x;
    cout<<"Scrie coordonatele lui y= ";
    cin>>y;

    if(x>=0 && y>=0)
    {
       cout<<"Punctul A se afla in cadranul 1";
    }

    else if(x>=0 && y<=0)
    {
       cout<<"Punctul A se afla in cadranul 2";
    }

    else if(x<=0 && y<=0)
    {
        cout<<"Punctul A se afla in cadranul 3";
    }

    else if(x<=0 && y>=0)
    {
        cout<<"punctul A se afla in cadranul 4";
    }

    return 0;
}
