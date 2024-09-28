#include<iostream>
using namespace std;
void determine(int a, int b);
main()
{
 	int a,b;
	system("cls");
	cout<<"Enter 1st number:";
	cin>>a;
	cout<<"Enter 2nd number:";
	cin>>b;
        determine(a,b);
}

void determine(int a, int b)
{
   if(a == b)
{
	cout<<"true";
}
else
{
	cout<<"false";
}
}