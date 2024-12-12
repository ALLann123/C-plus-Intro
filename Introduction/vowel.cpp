#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout<<"Enter a Letter: ";
	cin>>letter;
	switch(letter)
	{
		case 'a':
			cout<<"\nIs a vowel";
			break;
		case 'e':
			cout<<"\nIs a vowel";
			break;
		case 'i':
			cout<<"\nIs a vowel";
			break;
		case 'o':
			cout<<"\nIs a vowel";
			break;
		case 'u':
			cout<<"\nIs a vowel";
			break;
		default:
			cout<<"\nNot a Vowel";
	}
	return 0;
}
