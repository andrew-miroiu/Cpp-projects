#include <iostream>
#include <iomanip>

using namespace std;
//Prob. 1568
int main()
{
    int n,d,c=0;
    double ma,s;
    cout<<"Numarul n= ";
    cin>>n;

    for(d=1; d<=n; d++)
    {
        if(n%d==0)
        {
            s=s+d;
            c++;
        }
    }

    ma=s/c;
    cout<<fixed<<setprecision(2)<<"Media aritmetica= "<< ma;

    return 0;
}
