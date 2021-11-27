#include <iostream>

using namespace std;
//Prob. 388
int main()
{
    int n,c=0,d;
    cout<<"Scrie numaru n= ";
    cin>>n;

    for(d=1; d<=n; d++)
    {
        if(n%d==0 && d%2==0)
        {
            c++;
        }
    }

    cout<<"Numarul divizorilor pari ai numarului "<<n<<" este = "<<c;
    return 0;
}
