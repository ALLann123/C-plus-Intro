#include <iostream>
using namespace std;
int main()
{
	int i=1;
	double sum_even=0, sum_odd=1;
	while(i<=100)
	{
		if(i%2==0)
		{
			sum_even=sum_even+i;
		}
		else
		{
			sum_odd=sum_odd*i;
		}
		i++;
	}
	cout<<"Sum of even numbers: "<<sum_even;
	cout<<"\nSum of odd numbers:"<<sum_odd;
	return 0;
}
