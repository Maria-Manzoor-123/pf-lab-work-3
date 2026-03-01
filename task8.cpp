#include<iostream>
using namespace std;

main()
{
cout<<" Enter the voltage(in volts):";
float voltage;
cin>> voltage;

cout<<" Enter the current(in amperes):";
float current;
cin>> current;

float power=voltage*current;
cout<<" the power is in watts"<<power;
}