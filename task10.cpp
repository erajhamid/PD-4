#include<iostream>
using namespace std;
void reverse(string tf);
main()
{
 	string tf;
	system("cls");
	cout<<"Enter true or false";
	cin>>tf;
        reverse(tf);
}

void reverse(string tf)
{
   if(tf == "true")
{
	cout<<"false";
}
else
{
	cout<<"true";
}
}