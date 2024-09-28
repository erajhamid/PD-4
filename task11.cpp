#include<iostream>
using namespace std;
void discount(string name, float ticketPrice);
main()
{
 	string name;
	float ticketPrice;
	system("cls");
	cout<<"Enter the name of the country:";
	cin>>name;
	cout<<"Enter the ticket price in dollars:";
	cin>>ticketPrice;
        discount(name, ticketPrice);
}
void discount(string name, float ticketPrice)
{
   float discount, discountedPrice;
   if(name == "pakistan")
{
	discount= ((ticketPrice*5)/100);
	discountedPrice= ticketPrice- discount;
	cout<<"The ticket price after discount is"<< discountedPrice;
}
	else if(name == "ireland")
{
	discount= ((ticketPrice*10)/100);
	discountedPrice= ticketPrice-discount;
	cout<<"The ticket price after discount is"<< discountedPrice;
}
	else if(name == "india")
{
	discount= ((ticketPrice*20)/100);
	discountedPrice= ticketPrice-discount;
	cout<<"The ticket price after discount is"<< discountedPrice;
}
	else if(name == "england")
{
	discount= ((ticketPrice*30)/100);
	discountedPrice= ticketPrice-discount;
	cout<<"The ticket price after discount is"<< discountedPrice;
}
	else if(name == "canada")
{
	discount= ((ticketPrice*45)/100);
	discountedPrice= ticketPrice-discount;
	cout<<"The ticket price after discount is"<< discountedPrice;
}
 	else
{
         cout<<"no discount";
}
}	