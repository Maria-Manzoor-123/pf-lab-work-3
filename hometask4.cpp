#include<iostream>
using namespace std;

 main()
{
float i;
cout<<" Enter imposter count:";
cin>> i;

float p;
cout<<" Enter player count:";
cin>> p;
float chance =100*(i/p);

cout<<" chance of being an imposter"<<chance<<"%";
}