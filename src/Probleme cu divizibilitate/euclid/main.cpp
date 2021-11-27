#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a,b;
    cin >> a;
    for (int i=1; i<n; i++)
    {
        cin>>b;
        int r;
        while(b)
        {
        r=a%b;
        a=b;
        b=r;
        }
    }
    cout<<a;
    return 0;
}
