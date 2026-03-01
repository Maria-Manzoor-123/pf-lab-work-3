#include <iostream>
using namespace std;
 
main()
{ 
string name;
cout<<" Enter the movie name:";
cin>> name;

int ap;
cout<<" Enter the adult ticket price:$";
cin>> ap;

int cp;
cout<<" Enter the child ticket price:$";
cin>> cp;

int ats;
cout<<" Enter the number of adult ticket sold:";
cin>> ats;

int cts;
cout<<" Enter the number of child tickets sold:";
cin>> cts;
 
float pc;
cout<<" Enter the percentage amount donated to charity:";
cin>> pc;
cout<<"--------------------------------------------------"<<endl;

cout<<"movie:"<<name<<endl;
cout<<"total amount generated from ticket sales:$"<<(ap*ats)+(cp*cts);
cout<<" donation to charity :$"<<((ap*ats)+(cp*cts))*(pc/100);
cout<<"reamaining amount after donation:"<<((ap*ats)+(cp*cts))-(((ap*ats)+(cp*cts))*(pc/100));
}


