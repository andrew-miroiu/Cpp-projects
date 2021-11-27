#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bomboane.in");
ofstream g("bomboane.out");

int main()
{
    /*Într-o familie sunt trei copii şi un căţel. Copiii au primit în dar o pungă mare de bomboane pe
care s-au hotărât să le împartă frăţeşte după somnul de după-amiază. În timp ce ceilalţi doi copii
dormeau, unul dintre copii s-a trezit, a împărțit grămada în trei părți egale, ascunzând una dintre
părți. O bomboană a rămas în plus pe care i-a dat-o căţelului. Povestea s-a repetat și cu ceilalți doi
copii. După-amiază copiii împart bomboanele rămase în trei părți egale, rămânând din nou o
bomboană în plus care îi revine căţelului.
Cerință: Să se verifice dacă numărul de bomboane primit de cei trei copii permite derularea
exactă a evenimentelor prezentate mai sus și în caz afirmativ să se determine numărul de bomboane
pe care le primește fiecare copil. În caz negativ se va afișa valoarea 0.
Date de intrare: Din fșierul text bomboane.in se citește un număr natural n, care reprezintă
numărul de bomboane primit de cei trei copii.
Date de ieșire: Se vor afișa în fișierul text bomboane.out astfel:
 Pe un singur rând, trei numere naturale separate printr-un spațiu, care reprezintă
numărul de bomboane luate de fiecare copil, în ordinea trezirii acestora
 sau valoarea 0, dacă numărul din fișierul de intrare nu pemite derularea exactă a
evenimentelor prezentate mai sus.
Precizări și restricții: N≤ 1000.
Exemplu:
bomboane.in bomboane.out bomboane.in bomboane.out
    79        33 24 18       123         0*/

    int c1,c2,c3,r1,r2,r3,r4,b;

    //copii sunt c1, c2 si c3, iar resturile sunt r1,r2,r3,r4 si b=bomboane

    f>>b;
    c1=(b-1)/3;
    r1=(b-1)%3;
    c2=(2*c1-1)/3;
    r2=(2*c1-1)%3;
    c3=(2*c2-1)/3;
    r3=(2*c2-1)%3;
    r4=(2*c3-1)%3;
    c1=c1+(2*c3-1)/3;
    c2=c2+(2*c3-1)/3;
    c3=c3+(2*c3-1)/3;

    if(r1==0 && r2==0 && r3==0 && r4==0)g<<c1<<"  "<<c2<<"  "<<c3;
    else g<<0;

    f.close();
    g.close();
    return 0;
}
