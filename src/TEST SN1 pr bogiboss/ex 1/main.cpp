#include <iostream>

using namespace std;

int main()
{
    int n, x, v=0;
    float s=0, k=0;
    cin>>n;

    for(v=1; v<=n; v++)
    {
        cin>>x;

        if(x>0 && x%2==1)
        {
            s=s+x;
            k++;
        }
    }
    cout<<"Media aritmetica= "<<s/k;

    return 0;
}
