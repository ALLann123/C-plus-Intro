#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Welcome to Vote SYS\n";
	cout<<"Enter Your AGE: ";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"Congratulations you can Vote";
	}
	else
	{
		cout<<"\nSorry, You are not eligible to vote";
	}
}
