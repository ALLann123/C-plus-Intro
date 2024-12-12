#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers: "<<endl;
	cin>>a>>b>>c;
	if((a>b) && (a>>c))
	{
		cout<<"The greater number is: "<<a;
	}
	else if((b>a) && (b>c))
	{
		cout<<"The greater number is: "<<b;
	}
	else if((c>a) && (c>b))
	{
		cout<<"The greater number is: "<<c;
	}
	else{
		cout<<"They are Equal";
	}
}
