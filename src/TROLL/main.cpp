#include <iostream>

using namespace std;

int main()
{
    int b;
    cout<<"Cate bomboane mananci?Scrie aici: ";
    cin>>b;
    if(b<=5)
    {
        cout<<"Bravo, o portie pe masura. CONGRATS";
    }

    else if(b>5 && b<20)
    {
        cout<<"Eu zic sa ai grija";
    }

    else if(b==69)
    {
       cout<<"Bravo,SUGI PULA"<<endl;
           cout<<"                   cu dragoste si iubire MA-TA" ;

    }

    else
    {
        while(true)
        {
            cout<<"AI DIABET IN PULA MEA. MAI OPRESTE-TE!!!"<<endl;
        }
    }
    return 0;
}
