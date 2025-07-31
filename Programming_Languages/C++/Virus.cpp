#include<Windows.h>
int scrwid,scrht,a,b;
void getscrdim()
{
  scrwid=GetSystemMetrics(SM_CXSCREEN);
  scrht=GetSystemMetrics(SM_CYSCREEN);
}
void randommousepos()
{
  a=rand()%scrwid;
  b=rand()%scrwid;
  SetCursorPos(a,b);
}
int main()
{
  FreeConsole();
  getscrdim();
  while(true)
  {
    randommousepos();
    Sleep(10);
  }
}
