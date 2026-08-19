#include<iostream>
using namespace std;
int main()
{
	int n1,n2,lcm,copy;
	cout<<"enter small and large";
	cin>>n1>>n2;
	if(n1>n2)
{	copy=n1;
	n1=n2;
	n2=copy;}
	for(lcm=n2;(lcm%n1!=0);lcm=lcm+n2);
	cout<<lcm;
	return 0;
}
