#include <iostream>
/*11) Se dă un şir cu n numere naturale. Să se afişeze suma primilor n termeni din şir, apoi suma
primilor n-1 termeni din şir, şi aşa mai departe.*/
using namespace std;

int main()
{
    int i, n, v[100], s=0;
    cout<<"Scrie nr de elem: ";
    cin>>n;
    cout<<"Scrie elem vect.: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
        s=s+v[i];
    }
    cout<<s<<endl;
    for(i=n-1; i>0; i--)
    {
        cout<<s-v[i]<<endl;
        s=s-v[i];
    }
    return 0;
}
