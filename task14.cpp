#include<iostream>
using namespace std;
void check(int hour, int min);
main()
{
 	int hour,min;
	system("cls");
	cout<<"Enter the time in hours";
	cin>>hour;
	cout<<"Enter the time in minutes:";
	cin>>min;
        check(hour,min);
}
void check(int hour, int min)
{
   int hourTOmin;
   hourTOmin= hour*60;
	if(hourTOmin>min)
{
	cout<<hour;
}
else
{
	cout<<min;
}
}	