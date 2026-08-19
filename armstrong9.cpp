#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,copy,copy1,d,total,count,a;
	cout<<"enter the number";
	cin>>n;
	copy=n;
	copy1=n;
	count=0;
	total=0;
	while((n!=0)||(copy=0))
	{
	 if (n!=0)
	{n=n/10;
	count++;}
	else 
	{d=copy%10;
	a=pow(d,count);
	total=total+a;}
}
   if(total==copy)
   cout<<"it is armstrong number";
   else
   cout<<"not armstrong";
   return 0;
}
