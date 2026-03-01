#include<iostream>
using namespace std;

 main()
{
string name;
cout<<" Enter the name of person:";
cin>> name;

float weight;
cout<<" Enter the target weight to loss in kilograms:";
cin>> weight;

float s;
s=weight*15;
cout<< name<<" will need"<<s<<"days to lose"<<weight<<" kilograms of weight";
}

