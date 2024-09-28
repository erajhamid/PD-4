#include<iostream>
using namespace std;
void tpChecker(int noOFrolls, int people);
main()
{
 	int people, noOFrolls;
	system("cls");
	cout<<"Enter the number of people";
	cin>>people;
	cout<<"Enter the number of tissue rolls:";
	cin>>noOFrolls;
	tpChecker(noOFrolls, people);
}
void tpChecker(int noOFrolls, int people)
{
	float days;
	days=(noOFrolls*500)/(people*57);
	if(days>=14)
{
	cout<<"your tissue paper will last" << days <<endl;
	cout<<"no need"<< endl;
}
else
{
	cout<<"Your tissue paper will last " << days <<endl;
	cout<<"buy more";
}
}	