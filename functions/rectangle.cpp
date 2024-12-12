#include <iostream>
using namespace std;
void rectangle(double length, double width);
int main()
{
	/*get user input for the function*/
	double l,w;
	cout<<"Enter the length>> ";
	cin>>l;
	cout<<"\nEnter the width>> ";
	cin>>w;
	rectangle(l,w);
	return 0;
}

void rectangle(double length, double width)
{
	double area,perimeter;
	/*calculate the area*/
	area=length*width;
	cout<<"The area is= "<<area<<endl;
	perimeter=length+length+width+width;
	cout<<"The Perimeter= "<<perimeter;
}
