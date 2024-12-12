#include <iostream>
using namespace std;
double area(double rad);
double area(double length, double width);
const double pi=3.142;
int main()
{
	double r, l, w;
	cout<<"Enter Length>> ";
	cin>>l;
	cout<<"Enter width>> ";
	cin>>w;
	cout<<"Enter Circle Radius>> ";
	cin>>r;
	/*calculate area*/
	double rect_a, circ_a;
	rect_a=area(l,w);
	cout<<"The Area of the Rectangle= "<<rect_a<<endl;
	circ_a=area(r);
	cout<<"The area of a circle= "<<circ_a;
	return 0;
}

double area(double rad)
{
	double area;
	area=pi*rad*rad;
	return area;
}

double area(double length, double width)
{
	double area;
	area=length*width;
	return area;
}
