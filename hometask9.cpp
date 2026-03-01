#include <iostream>
using namespace std;
 
main()
{ 
int num ;
char d1;
char d2;
char d3;
char d4;

cout<<"Enter a 4 digit number:";
cin>> num;

d1=num%10;
d2=(num/10)% 10;
d3=(num/100)% 10;
d4=(num/1000)% 10;
//cout<<d1<<endl;
//cout<<d2<<endl;
//cout<<d3<<endl;
//cout<<d4<<endl;

int s;
s=d1+d2+d3+d4;
  cout<< "sum of digits="<< s;
}