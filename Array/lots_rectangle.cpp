#include <iostream>
using namespace std;
class Rectangle
{
	private:
		double length, width, area, perimeter;
	public:
		void get_input(), calculate(), get_output();
};
int main()
{
	Rectangle rect[20];
	int i, n;
	cout<<"How Many Rectangles do you want>> ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		rect[i].get_input();
		rect[i].calculate();
		cout<<endl<<"Enter another Rectangle input: "<<endl;
	}
	/*display output*/
	for(i=0;i<=n;i++)
	{
		rect[i].get_output();
	}
	return 0;
}

void Rectangle::get_input()
{
	cout<<"\nEnter Length: ";
	cin>>length;
	cout<<endl<<"Enter width:";
	cin>>width;
}

void Rectangle::calculate()
{
	area=length*width;
	perimeter=(length*2)+(width*2);
}

void Rectangle::get_output()
{
	cout<<endl<<"Length= "<<length;
	cout<<endl<<"width= "<<width;
	cout<<endl<<"Area is>> "<<area;
	cout<<endl<<"Perimeter is>> "<<perimeter<<endl;
}
