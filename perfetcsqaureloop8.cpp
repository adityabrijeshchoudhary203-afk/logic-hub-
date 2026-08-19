#include<iostream>
using namespace std;
int main()
{
int i,n,flag;
cout<<"enter the value";
cin>>n;
flag=1;
if ((n==0)||(n==1))
cout<<"perfect square number"<<n;
else 
{
	for (i=2;i<n;i++)
	{
		if (i*i==n)
		flag=0;
		cout<<"it is a perfect squareof";
	}
	if (flag==1)
	cout<<"it is perfect square";
	else 
	cout<<"not perfect square";
}
return 0;
}

