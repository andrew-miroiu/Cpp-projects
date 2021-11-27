#include<iostream>
using namespace std;
int fr[10],n,cn,c;
int main()
{
    cin>>n;
    cn=n;//clonam valoarea n in variabila cn
    while(cn>0) //construim vectorul frecventelor
    {
        c=cn%10;
        fr[c]++;
        cn=cn/10;
    }
//afisam cifrele distincte si numarul de aparitii
    for(c=0; c<10; c++)
        if (fr[c]>0)
            cout<<c<<" "<<fr[c]<<endl;
    return 0;
}
