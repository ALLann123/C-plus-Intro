#include <iostream>
using namespace std;
int main()
{
	int points;
	cout<<"Enter Points scored by the student: ";
	cin>>points;
	
	switch(points)
	{
		case 4:
			cout<<"\nDistinction";
			break;
		case 3:
			cout<<"\nCredit";
			break;
		case 2:
			cout<<"\nPass";
			break;
		case 1:
			cout<<"\nFail";
		default:
			cout<<"[+]Invalid Points";
	}
	return 0;
}
