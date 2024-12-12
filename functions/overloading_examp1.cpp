#include <iostream>
using namespace std;
double get_sum(double a, double b);
double get_sum(double a, double b, double c);
double get_sum(double a, double b, double c, double d);
int main()
{
	/*Program to demonstrate overloading*/
	double num1,num2,num3,num4;
	cout<<"Enter for numbers: "<<endl;
	cin>>num1>>num2>>num3>>num4;
	double two_nums, three_nums, four_nums;
	two_nums=get_sum(num1, num2);
	cout<<"Sum of two numbers= "<<two_nums<<endl;
	three_nums=get_sum(num1,num2,num3);
	cout<<"Sum of three numbers= "<<three_nums<<endl;
	four_nums=get_sum(num1,num2,num3,num4);
	cout<<"Sum of four numbers= "<<four_nums<<endl;
	return 0;
}

double get_sum(double a, double b)
{
	double sum;
	sum=a+b;
	return sum;
}

double get_sum(double a, double b, double c)
{
	double sum;
	sum=a+b+c;
	return sum;
}

double get_sum(double a, double b, double c, double d)
{
	double sum;
	sum=a+b+c+d;
	return sum;
}









