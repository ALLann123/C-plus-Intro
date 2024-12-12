#include <iostream>
using namespace std;
int main()
{
	/*print odd numbers between 1-30*/
	int i=1;
	while(i<=30)
	{
		if(i%2==1)
		{
			cout<<"\n"<<i;
		}
		i++;
	}
	return 0;
}
