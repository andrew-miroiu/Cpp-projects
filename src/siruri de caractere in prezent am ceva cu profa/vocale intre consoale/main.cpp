#include <iostream>
#include <string.h>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char s[226];
    cin.get(s, 225);
    char vocale[10] = "aeiou";
    char consoane[50] = "bcdfghjklmnpqrstvwxyz";
    int nrVocale = 0;

    for(int i = 1; i < strlen(s)-1; i++)
    {
        if(strchr(vocale, s[i]) && strchr(consoane, s[i-1]) && strchr(consoane, s[i+1]))
        {
            nrVocale++;
        }
    }

    cout<<"VOCALE: "<<nrVocale;
    return 0;
}
