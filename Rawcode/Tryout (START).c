#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {

    system("cmd /c TryStartMain.exe");
    
    Sleep(9000);

    system("cmd /c Final.exe");

    return 0;
}