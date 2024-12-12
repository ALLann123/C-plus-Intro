#include <iostream>
using namespace std;
int main()
{
	int points;
	cout<<"Enter Points Scored:";
	cin>>points;
	
	if(points==4)
	{
		cout<<"\nDistinction";
	}
	else if(points==3)
	{
		cout<<"\nCredit";
	}
	else if(points==2)
	{
		cout<<"\nPass";
	}
	else if(points==1)
	{
		cout<<"\nFail";
	}
	else
	{
		cout<<"\nInvalid Input";
	}
	return 0;
}
