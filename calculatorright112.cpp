#include<iostream>
using namespace std;
int main()
{
	int ch,a,b,c;
	cout<<"enter two digit number for calculation";
	cin>>a>>b;
	cout<<"enter 1 for addition, 2 for substraction,3 for multiplication,4 for divd,";
	cin>>ch;
	if (ch==1)
	{c=a+b;
	cout<<"addition"<<c;}
	else if (ch==2)
	{c=a-b;
	cout<<"susbraction"<<c;}
	else if(ch==3)
   {c=a*b;
	cout<<"multiplication"<<c;}
	else if (ch==4)
   {c=a%b;
	cout<<"divd"<<c;}
	return 0;
}
