#include<iostream>
using namespace std;
int main()
{
	int d,copy,lr,hr,sum,sqre,i,n,count;
	cout<<"enter lower range and higher range";
	cin>>lr>>hr;
	for(i=lr;i<=hr;i++)
	{sqre=i*i;
	copy=i;
	count=1;
	while(copy!=0)
{
		count=count*10;
		copy=copy/10;
	}
	if(i==(sqre%count))
	cout<<i<<endl;
}
return 0;
}

