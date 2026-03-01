#include<iostream>
using namespace std;
main()
{
cout<<"Enter the number of wins:";
int wins;
cin>> wins;

cout<<" Enter the numbers of draws:";
int draws;
cin>> draws;

cout<<"Enter the number of loses:";
int loses;
cin>>loses;

int points=(wins*3)+(draws*1)+(loses*0);

cout<<" pakistan has obtained "<< points ;
}