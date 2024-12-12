#include <iostream>
using namespace std;
int main()
{
	/*Calculate area and circumderence of a circle*/
	const double pi=3.142;
	float r;
	double area, circum;
	/*get keyboard input*/
	cout<<"Enter the radius>> ";
	cin>>r;
	/*Calculate area*/
	area=pi*r*r;
	/*calculate circumference*/
	circum=pi*(r+r);
	/*display results*/
	cout<<"The radius>> "<<r<<endl;
	cout<<"\nThe Area: "<<area<<endl;
	cout<<"The Circumference: "<<circum<<endl;
	return 0;
}
