#pragma comment( lib, "user32.lib" )

#include <windows.h>
#include <stdio.h>

HHOOK hMouseHook;

__declspec(dllexport) LRESULT CALLBACK KeyboardEvent (int nCode, WPARAM wParam, LPARAM lParam)
{
    int counter;
    if(wParam == WM_LBUTTONDOWN) {
        counter++;
        printf("Count: $i\n", counter);
    }
    if(wParam == WM_RBUTTONDOWN){
        counter++;
        printf("Count: $i\n", counter);
    }
    return 0;
}

