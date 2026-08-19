#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int wd,rd,amt,ch;
	cout<<"enter the given number (1)both are equal (2) red dice greater(3) wide dice greater";
	cin>>ch;
	cout<<"enter ur bet";
	cin>>amt;
	
	srand(time(NULL));
	rd=rand()%6+1;
	wd=rand()%6+1;
	
	if ((ch==1)||(ch==2)||(ch==3))
	{
	cout<<"first dice number is"<<rd<<endl;
	cout<<"second dice number is"<<wd<<endl;
	if (ch==1&&rd==wd)
    cout<<"congratulation youu winn jackpot"<<amt*5;
	else if (ch==2&&rd>wd)
	cout<<"congratulation youu winn"<<amt*2;
	else if (ch==3&&rd<wd)
	cout<<"congratulation you winn"<<amt*2;
    else 
    cout<<"better luck next time....";
	}
    else 
    cout<<"please inter valid number ";
    return 0;}
    
