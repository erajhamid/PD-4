#include<iostream>
#include<windows.h>
using namespace std;
void printMenu();
void calculateAggregate(string nameSTD1, float matricMarks1, float interMarks1, float ecatMarks1, string nameSTD2, float matricMarks2, float interMarks2, float ecatMarks2 );
void compareMarks(string nameSTD1, string nameSTD2, float ecatMarks1, float ecatMarks2);
main()
{
 string nameSTD1, nameSTD2;
 float matricMarks1, interMarks1, ecatMarks1, matricMarks2, interMarks2, ecatMarks2;
 printMenu();
 cout<<"Enter the name of 1st student:";
 cin>>nameSTD1;
 cout<<"Enter the name of 2nd student:";
 cin>>nameSTD2;
 cout<<"Enter the matric marks of 1st student:";
 cin>>matricMarks1;
 cout<<"Enter the matric marks of 2nd student:";
 cin>>matricMarks2;
 cout<<"Enter the inter marks of 1st student:";
 cin>>interMarks1;
 cout<<"Enter the inter marks of 2nd student:";
 cin>>interMarks2;
 cout<<"Enter the ecat marks of 1st student:";
 cin>>ecatMarks1;
 cout<<"Enter the ecat marks of 2nd student:";
 cin>>ecatMarks2;
 calculateAggregate(nameSTD1, matricMarks1, interMarks1, ecatMarks1, nameSTD2, matricMarks2, interMarks2, ecatMarks2);
 compareMarks( nameSTD1, nameSTD2, ecatMarks1, ecatMarks2);
}
  void printMenu()
{
    cout<<"  #          #      #         #   ########        "<<endl;
    cout<<"  #   	#      # #      ##   #               "<<endl;
    cout<<"  #          #      #   #  #  #    #######        "<<endl;
    cout<<"  #          #      #     #   #           #       "<<endl;
    cout<<"  #          #      #         #          #        "<<endl;
    cout<<"   ##########       #         #    ######         "<<endl;
}
void calculateAggregate(string nameSTD1, float matricMarks1, float interMarks1, float ecatMarks1, string nameSTD2, float  matricMarks2, float interMarks2, float ecatMarks2 )
{
	float aggregate1, aggregate2;
	aggregate1=((matricMarks1/1100)*100*0.25)+((interMarks1/550)*100*0.45)+((ecatMarks1/400)*100*0.30);
	cout<<"The aggregate of the"<< nameSTD1 <<aggregate1<<endl;
	aggregate2=((matricMarks2/1100)*100*0.25)+((interMarks2/550)*100*0.45)+((ecatMarks2/400)*100*0.30);
	cout<<"The aggregate of the"<< nameSTD2 <<aggregate2<< endl;
}
void compareMarks(string nameSTD1, string nameSTD2, float ecatMarks1, float ecatMarks2)
{
 if(ecatMarks1 > ecatMarks2)
{
  cout<< nameSTD1 << "is assigned roll no 1"<< endl;
}
else
{
 cout<< nameSTD2 << "is assigned roll no 1"<<endl;
}
}

         
    	