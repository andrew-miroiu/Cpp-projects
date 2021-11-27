#include <iostream>

using namespace std;

int main()
{

    int z, l, a;
    cin>>z>>l>>a;
   if(z>1)z--;
   else
        if (l==1) {l=12;z=31;a--;}
        else if (l==3)
        if(a%4==0 && a%100!=0  a%400==0)//an bisect
                    z=29;
            else z=28;
            else
                if(l==2l==4l==6l==9||l==11) z=31;
            else z=30;
            l--;
            cout<<z<<" "<<l<<" "<<a<<endl;
            return 0;
}
