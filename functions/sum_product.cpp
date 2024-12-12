#include <iostream>
using namespace std;
void get_sum(double num1, double num2, double num3);
void get_product(double num1, double num2, double num3);
int main()
{
	double a,b,c;
	cout<<"Enter three numbers: "<<endl;
	cin>>a>>b>>c;
	/*Call the functions */
	get_sum(a,b,c);
	get_product(a,b,c);
	return 0;
}

void get_sum(double num1, double num2, double num3)
{
	double sum;
	sum=num1+num2+num3;
	cout<<"The SUM= "<<sum<<endl;
}

void get_product(double num1, double num2, double num3)
{
	double product;
	product=num1*num2*num3;
	cout<<"The Product= "<<product;
}
