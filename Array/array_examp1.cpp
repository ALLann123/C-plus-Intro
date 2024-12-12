#include <iostream>
using namespace std;
int main()
{
	int i, num[10];
	for(i=0;i<=10;i++)
	{
		cout<<endl<<"Enter Number:";
		cin>>num[i];
	}
	cout<<"\nNumbers Entered: ";
	i=0;
	while(i<=10)
	{
		cout<<"\n"<<num[i]<<endl;
		i++;
	}
	return 0;
}
