#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");

int main()
{
    int a, b, n, minim=100, maxim=0;

    while(f>>n)
    {
        if(n>9 && n<100)
        {
            if(n<minim)
            {
                minim=n;
            }

            if(n>maxim)
            {
                maxim=n;
            }
        }
    }

    cout<<minim-1<<" "<<maxim+1;

    return 0;
}
