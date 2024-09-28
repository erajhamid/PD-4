#include<iostream>
using namespace std;
void check(int a, int b);
main()
{
 	int a,b;
	system("cls");
	cout<<"Enter your position";
	cin>>a;
	cout<<"Enter your friend's position:";
	cin>>b;
        check(a,b);
}
void check(int a, int b)
{
   if((b-a)<=5)
{
	cout<<"true";
}
 	else
{
	cout<<"false";
}
}	