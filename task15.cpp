#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main()
{
 	int redRose, whiteRose, tulip;
	system("cls");
	cout<<"Enter the number of red roses";
	cin>>redRose;
	cout<<"Enter the number of white rose";
	cin>>whiteRose;
	cout<<"Enter the number of tulip";
	cin>>tulip;
        flowerShop(redRose, whiteRose, tulip);
}
void flowerShop(int redRose, int whiteRose, int tulip)
{
   float originalPrice,priceAfterDiscount,discount;
   originalPrice= ((redRose*2)+(whiteRose*4.10)+(tulip*2.50));
	if(originalPrice>200.0)
{
	discount= (originalPrice*20)/100;
	priceAfterDiscount= originalPrice-discount;
	cout<<"The original price is" <<originalPrice;
	cout<<"The discounted price is" << priceAfterDiscount;
}
else
{
	cout<<"The original price is" <<originalPrice;	
}
}	