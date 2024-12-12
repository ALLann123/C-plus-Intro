#include <iostream>
using namespace std;
int main()
{
	/*Area and perimeter of a rectngle*/
	int l, w;
	/*get length and width from user*/
	cout<<"Enter Length"<<endl;
	cin>>l;
	cout<<"Enter width"<<endl;
	cin>>w;
	/*calculate the area*/
	double area;
	area=l*w;
	/*calculate perimeter*/
	int perimeter;
	perimeter=l+l+w+w;
	/*display results*/
	cout<<"Length: "<<l<<"\nWidth: "<<w<<endl;
	cout<<"The Area is: "<<area<<endl;
	cout<<"\nThe perimeter is: "<<perimeter<<endl;
	return 0;
	
}
