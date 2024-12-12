#include <iostream>
using namespace std;
const double pi=3.142;
class my_circle  /*creating class */
{
	private:
		double r, circum, area;
	public:
		void input(), calculate(), output();
};
int main()
{
	/*create an object*/
	my_circle circ1;
	circ1.input();
	circ1.calculate();
	circ1.output();
	return 0;
}

void my_circle::input()
{
	cout<<"Enter the Radius: ";
	cin>>r;
}

void my_circle::calculate()
{
	area=pi*r*r;
}
void my_circle::output()
{
	cout<<"\n The area is>> "<<area<<endl;
	
}
