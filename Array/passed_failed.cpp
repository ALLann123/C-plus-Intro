#include <iostream>
using namespace std;
int main()
{
	int i, pass=0, fail=0;
	double marks[10]={49,29,30,50,90,60,67,80,78,59};
	for(i=0;i<11;i++)
	{
		if(marks[i]>=50)
		{
			pass=pass+1;
		}
		else
		{
			fail=fail+1;
		}
		
	}
	cout<<"Candidates who passed>> "<<pass;
	cout<<endl<<"Candidates who failed>> "<<fail;
	return 0;
}
