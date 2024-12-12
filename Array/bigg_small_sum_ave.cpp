#include <iostream>
using namespace std;
int main()
{
	/*Get numbers from users, 5 of them and look for bigger, smaller and do sum and average*/
	int i, num[5], sum=0, biggest, smallest;
	double average;
	for(i=0;i<=4;i++)
	{
		cout<<endl<<"Enter Number:";
		cin>>num[i];
	}
	biggest = smallest = num[0];
	for(i=0;i<=4;i++)
	{
		sum=sum+num[i];
		if(num[i]>biggest)
		{
			biggest=num[i];
		}
		else if(num[i]<biggest)
		{
			smallest=num[i];
		}
	}
	average=sum/5;
	cout<<"\nThe biggest: "<<biggest<<endl;
	cout<<"The smallest: "<<smallest<<endl;
	cout<<"The Sum= "<<sum<<endl;
	cout<<"The Average= "<<average<<endl;
	return 0;
}
