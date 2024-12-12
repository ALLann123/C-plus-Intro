#include <iostream>
using namespace std;
int main()
{
	/*get user input, calculate sum, calculate average*/
	int a,b,c;
	cout<<"Enter three numbers\n";
	cin>>a>>b>>c;
	cout<<"Numbers Entered: "<<a<<","<<b<<","<<c<<endl;
	int sum;
	sum=a+b+c;
	double average;
	average=sum/3;
	cout<<"The Sum is: "<<sum<<endl;
	cout<<"The Average is:" <<average<<endl;
	cout<<"\nGood bye!!";
	return 0;
}
