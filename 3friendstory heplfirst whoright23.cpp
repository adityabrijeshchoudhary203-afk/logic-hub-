#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{

int a,b,c,d1,d2;
cout<<"enter the distance a,b,c";
cin>>a>>b>>c;
d1=abs(c-a);
d2=abs(c-b);
if(d1>d2)
cout<<"b reached first";
else if (d1<d2)
cout<<"a reached first";
else
cout<<"both  reached at same time";
return 0;}
