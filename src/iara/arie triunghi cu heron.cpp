#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c,p;
    cout<<" latura a= ";
    cin>>a;
    cout<<" latura b= ";
    cin>>b;
    cout<<" latura c= ";
    cin>>c;
    p=(a+b+c)/2;
    cout<<" Aria triunghiului este "<<sqrt(p*(p-a)*(p-b)*(p-c));
    return 0;
}
