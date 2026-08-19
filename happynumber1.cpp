#include<iostream>
using namespace std;
int main()
{
	int n,digit,sum,dig;
	cout<<"enter number ";
	cin>>n;
	
	while((n!=1)&&(n!=4))
	{
		sum=0;
		while(n!=0)
	{	dig=n%10;
		sum=sum+(dig*dig);
		n=n/10;}
		n=sum;
	}
	if(sum==1)
	cout<<"happy"<<sum;
	else
	cout<<"not happy"<<sum;
	return 0;
}
