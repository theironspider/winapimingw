#include <windows.h>
#include <winuser.h>
// Register the window class.
const wchar_t CLASS_NAME[]  = L"Sample Window Class";

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst,LPSTR args,int ncmdashow)
{
    MessageBox(NULL,"HELLLO","MY FIRST GUI",MB_OK);
    
    return 0;
}