#include <iostream>

using namespace std;

int main()
{
int a, b, c, d, e, s, minim;
    //Se dau 5 numere distincte. Să se determine suma celor mai mari 3 dintre ele.
    cin>>a>>b>>c>>d>>e;

    s = a+b+c+d+e;
    minim = a;

    if (b < minim)
        minim = b;
    if (c < minim)
        minim = c;
    if (d < minim)
        minim = d;
    if (e < minim)
        minim = e;

    s = s-minim;

    if (a == minim)
        a = 100001;
    if (b == minim)
        b =100001;
    if (c == minim)
        c =100001;
    if (d == minim)
        d =100001;
    if (e == minim)
        e =100001;

    minim = a;

    if (b < minim)
        minim = b;
    if (c < minim)
        minim = c;
    if (d < minim)
        minim = d;
    if (e < minim)
        minim = e;

    s = s-minim;

    cout<<s;

    return 0;
}
