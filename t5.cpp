#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y );
main()
{
   gotoxy(4,7);
   cout<<"ERAJ";
}
  
void gotoxy(int x, int y)
{
 	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


