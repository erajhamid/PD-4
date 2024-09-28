#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
 	int speed;
	system("cls");
	cout<<"Enter the speed in km/h:";
	cin>>speed;
        checkSpeed(speed);
}
void checkSpeed(int speed)
{
   if(speed>100)
{
	cout<<"You will be challaned";
}
 	else
{
	cout<<"You are going at a good speed";
}
}	