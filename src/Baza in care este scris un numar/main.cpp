#include <iostream>

using namespace std;

int main()
{
    int x,ma;
    cin>>x;
    ma=x%10;
    while(x>0)
    {  if(x/10%10>ma)
          ma=x/10%10;
      x=x/10;
    }
    cout<<"Cea mai mica baza in care poate fi scris numarul este "<<ma+1;
    return 0;
}
