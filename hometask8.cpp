#include <iostream>
using namespace std;
 
main()
{ 
float vp;
float fp;
float te;
float tvp;
float tfp;
cout<<" Enter vegetable price per kilograms(in coins):";
cin>> vp;

cout<<"Enter fruits price per kilograms(in coins):";
cin>> fp;

cout<<" Enter total kilograms of vegetables:";
cin>> tvp;

cout<<" Enter total fruits price per kilograms:";
cin>> tfp;
te=(vp*tvp)+(fp*tfp);
 cout<<" total earning in rupees(Rps)"<<te;
}
