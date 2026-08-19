#include<iostream>
using namespace std;
int main()
{
	int n,dig,fac,sum,i,copy;
	cout<<"enter the number";
	cin>>n;
	copy=n;
   sum=0;
 while(n!=0)
{dig=n%10;
 fac=1;
   for (i=1;i<=dig;i++)
 {
     fac=fac*i;
}
   sum=fac+sum;
   n=n/10;
}
	if(sum==copy)
	cout<<"strong number;";
	else 
	cout<<"not strong";
	return 0;
}

