#include <iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"Enter the desired number>> ";
	cin>>num;
	
	for(i=1;i<=10;i++)
	{
		if(i==num)
		{
			cout<<"\nGot the users number: "<<num;
			break;
		}
	}
	return 0;
}
