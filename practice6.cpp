#include <iostream>
using namespace std;

main()
{
int a;
cout<<" Enter paint area:";
cin>> a;

int w;
cout<<" Enter width:";
cin>> w;

int h;
cout<<" Enter height:";
cin>> h;


cout<<" walls painted:"<<a/(w*h);
}