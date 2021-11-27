#include <iostream>

using namespace std;
//408
int main()
{
    int n, ogl=0, d, nr;
    cout<<"Scrie n= ";
    cin>>n;
    while (n>0)
    {
        ogl=ogl*10+n%10;
        n=n/10;
    }

    for (d=1; d<=ogl; d++)
    {
        if (ogl%d==0)
        {
            nr++;
        }


    }
    cout<<ogl<<" are "<<nr<<" divizori"<<endl;
    return 0;
}
