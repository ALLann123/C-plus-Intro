#include <iostream>
using namespace std;
class my_rectangle
{
	private:
		double length, width, area ,perimeter;
	public:
		void input(), calculate(),output();
};
int main()
{
	my_rectangle rect1;
	rect1.input();
	rect1.calculate();	
	rect1.output();
	return 0;
}

void my_rectangle::input()
{
	cout<<"Enter the length: "<<endl;
	cin>>length;
	cout<<"Enter the width: "<<endl;
	cin>>width;
}
void my_rectangle::calculate()
{
	area=length*width;
	perimeter=(length*2)+(width*2);
}
void my_rectangle::output()
{
	cout<<endl<<"Perimeter is>> "<<perimeter;
	cout<<endl<<"Area is>> "<<area;
}
