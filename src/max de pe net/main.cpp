#include <iostream>

int maximum (int,int,int);
namespace std;
int main()
{
	int a,b,c;

   cout<<"Enter Three Integers: ";
   cin>>a>>b>>c;
   cout<<"Maximum is: "<<maximum(a,b,c)<<endl;
   getch();
   return 0;
}

maximum (int a,int b,int c)
{
	if(a>b)
   {
		if(a>c)
      {	cout<<a;
      }
   elsif(b>a)
   {
   	if(b>c)
      {
      	cout<<b;
      }
   }
   elsif(c>b)
   {
   	if(c>a)
      {
      	cout<<c;
      }
   }
}
