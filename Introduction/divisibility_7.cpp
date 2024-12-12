#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num%7==0)
	{
		cout<<"\nNumber is divisible by 7";
	}
	else
	{
		cout<<"\nNumber is not divisible by 7";
	}
	return 0;
}
