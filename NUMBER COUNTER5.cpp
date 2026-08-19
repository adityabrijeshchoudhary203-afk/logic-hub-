#include<iostream>
using namespace std;
int main()
{
int c,n;
cout<<"ENTER THE NUMBER:)";
cin>>n;
c=0;
while (n!=0)
{n=n/10;
c=c+1;}
cout<<c;
return 0;
}
