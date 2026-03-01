#include <iostream>
using namespace std;
 
main()
{
int s;
cout<<" Enter the size of fertilizer bag in pounds:";
cin>> s;

int c;
cout<<" Enter the cost of bag:";
cin>> c;

int a;
cout<<" Enter the area in square feet that can covered by bag:";
cin>> a;

float f;
f=c/s;
cout<<"cost of fertilizer per pound:"<<f;

 float o;
o=c/a;
cout<<" cost of fertilizer per foot:" <<o;

}
