#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
        
        
        system("cmd /c Phase1.exe");
        Sleep(9);
        system("cmd /c Msg.exe");
        Sleep(3000);
        system("cmd /c Phase3.exe");
        Sleep(9000);
        exit(0);

        return 0;
    }