#include <iostream>
using namespace std;
 
main()
{ 
char n1; cout<<"Num 1:";
cin>> n1;

char n2; cout<<"Num 2:";
cin>> n2;
 
char n3; cout<<" Num 3:";
cin>> n3;

char n4; cout<<"Num 4:";
cin>> n4;

char n5; cout<<" Num 5:";
cin>> n5;

char n6; cout<<" Num 6:";
cin>> n6;

char n7; 
cout<<" Num 7:";
cin>> n7;

char n8;
 cout<<"\n Num 8:";
cin>> n8;

char n9;
 cout<<"\n Num 9:";
cin>> n9;

float n10; 
cout<<"\n Num 10:";
cin>> n10;

char n11;
 cout<<"\n Num 11:";
cin>> n11;

char n12;
cout<<"\n Num 12:";
cin>> n12;

char n13; cout<<" Num 13:"<<endl;
cin>> n13;

char n14; cout<<" Num 14:"<<endl;
cin>> n14;

char n15; cout<<" Num 15:"<<endl;
cin>> n15;

int in1_n5=n1+n2+n3+n4+n5;
int sn6_n10=n6*n7*n8*n9*n10;
int tn11_n15=n11-n12-n13-n14-n15;

int result;
result=in1_n5+sn6_n10-tn11_n15;
cout<<"the final result is:"<<result;
}