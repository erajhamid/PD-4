#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
 	int holidays;
	system("cls");
	cout<<"Enter the number of holidays";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int workingDays,timeForGames,differenceFromNorm;
	workingDays= 365-holidays;
	timeForGames=( workingDays*63)+(holidays*127);
	differenceFromNorm= 30000-timeForGames;
	if (differenceFromNorm>0)
{
	cout<<"tom sleeps well"<< endl;
	cout<<(differenceFromNorm/60) <<"hours and" << (differenceFromNorm%60)<< "minutes less for play";
}
else
{
	cout<<"tom will run away"<< endl;
	cout<<(differenceFromNorm*-1)/60<< "hours and" << (differenceFromNorm*-1)%60 << "minutes for play";
}
}	