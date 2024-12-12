#include <iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter the target number to search>> ";
	cin>>num;
	
	for(i=1; i<=10;i++)
	{
		if(i==num)
		{
			cout<<"\n[+]Target gotten= "<<num;
			continue;
		}
		cout<<"\nCurrent Number= "<<i;
	}
	return 0;
}
