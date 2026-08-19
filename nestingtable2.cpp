#include<iostream>
using namespace std;
int main()
{
	int n,n1,n2,t,flag;
	cout<<"n1 and n2";
	cin>>n1>>n2;
	flag=1;
	if(n1<n2)
	for (n1=1;n2<=flag;n2++)
	{if((n2%n1)==0)
	n1=n1-n2;
	else 
	n2=n2-n1;
}
cout<<n1;
return 0;
}
