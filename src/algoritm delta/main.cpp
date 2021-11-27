#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, delta, a, b, c;
    float x1, x2;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;

    delta=pow(b,2)- (4*a*c);
    cout<<"Delta = "<<delta<<endl;

    delta=sqrt(delta);
    cout<<"rad/delta = "<<delta<<endl;

    if(delta<0)
    {
        cout<<"NU EXISTA SOLUTII in R";
    }

    else if(delta==0)
    {
        x1=-b/(2*a);
        x2=x1;
    }

    else if(delta>0)
    {
        x1=(-b+delta)/(2*a);
        x2=(-b-delta)/(2*a);
    }

    cout<<"x1= "<<x1<<endl;
    cout<<"x2= "<<x2;

    return 0;
}
