#include <iostream>
using namespace std;
int main()
{
	int i;
	i=50;
	do
	{
		if(i<=200 && i%7==0)
		{
			cout<<"\n"<<i<<" is   Divisible";
		}
		else
		{
			cout<<"\n"<<i<<" is not divisible";
		}
		i++;
	} while(i<=200);
	return 0;
}
