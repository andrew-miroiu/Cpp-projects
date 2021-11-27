#include <iostream>

using namespace std;

int ogl;
int i, j, ci;
bool verif_prime_nr=true, verif_prime_ogl=true;

int nume(long i)
{
    for(i=1000; i<=99999; i++)
    {
        ci=i;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                verif_prime_nr=false;
            }
        }

        while(ci!=0)
        {
            ogl=ogl*10 + ci%10;
            ci=ci/10;
        }

        for(j=2; j<ogl; j++)
        {
            if(ogl%j==0)
            {
                verif_prime_ogl=false;
            }
        }

    }
}

int main()
{
    for(i=1000; i<99999; i++)
    {
        if(verif_prime_nr==true && verif_prime_ogl==true && ogl==i)
        {
            cout<<nume(i)<<" ";
        }
    }

    return 0;
}
