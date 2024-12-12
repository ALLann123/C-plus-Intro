#include <iostream>
using namespace std;
int main()
{
	/*Checking bigger number*/
	int a, b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	if(a>b)
	{
		cout<<a<<" is greater than "<<b<<endl;
	}
	else if(a<b)
	{
		cout<<b<<" is greater than "<<a<<endl;
	}
	else
	{
		cout<<b<<" is equal to "<<a<<endl;
	}
	return 0;
}
