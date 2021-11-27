#include <iostream>

using namespace std;


int main ()
{

    int a, b, c, smaxim;
    cout<<"Scrie numerele:";
   cin>>a>>b>>c;

   smaxim = a%10+a/10;

   if (b%10+b/10 > smaxim)
   {
       smaxim = b%10+b/10;
   }

   if (c%10+c/10 > smaxim)
   {
       smaxim = c%10+c/10;
   }

   if (smaxim == a/10 + a%10)
   {
       cout<<a<<" ";
   }

   if (smaxim == b/10 + b%10)
   {
       cout<<b<<" ";
   }

   if (smaxim == c/10 + c%10)
   {
       cout<<c<<" ";
   }

   return 0;

}
