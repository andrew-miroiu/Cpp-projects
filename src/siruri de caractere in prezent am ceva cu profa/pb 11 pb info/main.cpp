#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;

int main()
{
    char s[21], vocale[20] = "aeiou";
    cin.get(s, 21);
    strlwr(s);
    for(int i = 0; i < strlen(s); i++)
    {
        if(strchr(vocale, s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }

    cout<<s;
    return 0;
}
