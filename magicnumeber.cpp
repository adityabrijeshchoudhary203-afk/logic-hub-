#include<iostream>
using namespace std;
int main()
{
	int n,sum;
cout<<"enter the number ";
cin>>n;
while(n>9){
sum=0;
while(n>0){
sum=sum+(n%10);
n=n/10;}
n=sum;
}
if(sum==1)
cout<<"magic number";
else
cout<<"not magic number";
return 0; }
