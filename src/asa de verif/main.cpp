#include <iostream>

using namespace std;

int main()
{
    int x,d,pmax=0,p,factmax;
    cin>>x;

    d=2;
        while(x>1)
            
    {
        p=0;
                while(x%d==0)
                      {
              x=x/d;
                         p=p+1;
                      
        }
               if(p!=0)
                         if(p>>pmax)
                             {
                 
                pmax=p;
                                factmax=d;
                             
            }
                     d=d+1;
            
    }
        return 0;
}
