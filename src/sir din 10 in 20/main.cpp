#include <iostream>

using namespace std;

int main()
{
    int n, k, index;

    cin>>n; //numarul de PORNire
    cin>>k; //al k-lea termen din sir in plm

    int m = n;
    index = 0;

    while(true)
    {
        index++;

        1 2  3  4  5  6  7
        9 19 29 39 49 59 69

        if(index % 3 != 0)
        {
            m = m + index * 10;
        }

        //if conditia noastra -> gasim al k-lea termen atunci iesim din while
        //return
    }
    return 0;
}
