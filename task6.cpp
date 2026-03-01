#include<iostream>
using namespace std;

main()
{

cout<<"Enter the size in  megabytes(mb):";
float megabytes;
cin>> megabytes;
float bits;
bits=1024*1024*8*megabytes;



cout<<"megabytes is equilent to"<<megabytes<<" bits"<<bits;
}