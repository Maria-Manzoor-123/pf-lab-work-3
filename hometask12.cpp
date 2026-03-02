#include<iostream>
using namespace std;

main()
{
int n,w,h,wa,nw;
cout<<"Number ofsqyare meter u can print:";
cin>> n;

cout<<"Width of a single wall(in meters):";
cin>> w;

cout<<" Height of a single wall(in meters):";
cin>> h;
wa= w*h;
nw=n/wa;
cout<<" number of walls u can print:"<< nw;
}