#include<iostream>
using namespace std;

main()
{
cout<<"Enter the name:";
string name;
cin>> name;

cout<<"Enter the matric marks( out of 1100):";
 float matric ;
cin>> matric ;

cout<<" Enter the  intermediate marks( out of550):";
float intermediate ;
cin>> intermediate ;

cout<<" Enter the Ecat marks( out of400):";
float Ecat  ;
cin>> Ecat  ;

float Aggregate;
Aggregate =( matric/1100* 10)+(intermediate/550* 40)+(Ecat/400* 50);
cout<<" Aggregate  is"<< Aggregate ;
}