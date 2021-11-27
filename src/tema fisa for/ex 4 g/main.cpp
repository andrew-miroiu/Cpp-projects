#include <iostream>

using namespace std;

int main()
{
    int x,a,b,pc,uc,cx1,cx2,n=1,cx3,max1=0,max2=0;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;

    for(x=a; x<=b; x++)
    {
        cx1=x;
        cx2=x;
        cx3=x;
        n=1;

        uc=cx1%10;

        while(cx3!=0)
        {
            n=n*10;
            cx3=cx3/10;
        }

        pc=cx2/(n/10);

        int cx=uc*(n/10)+(x%(n/10)/10*10+pc);
        cout<<"rez= "<<cx<<endl;
        max1=uc*(n/10)+(x%(n/10)/10*10+pc);

    }

    return 0;
}

