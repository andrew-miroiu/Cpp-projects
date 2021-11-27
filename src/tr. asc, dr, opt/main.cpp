#include <iostream>

using namespace std;

int main()
{
   int a, b, c;
   cout<<"Scrie a b c=";
   cin>>a>>b>>c;

   if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
   {
        if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            cout<<"Triunghiu este dreptunghic";

        if(a*a+b*b>c*c && b*b+c*c>a*a && a*a+c*c>b*b)
            cout<<"Triunghiul este ascutitunghic";

        if(a*a+b*b<c*c || b*b+c*c<a*a || a*a+c*c<b*b)
            cout<<" Triunghiul este optuzunghic";
   }
   else
    cout<<"Numerele nu sunt bune.";

    return 0;
}
