#include <iostream>
using namespace std;
int main()
{
	/*Grade system for student*/
	int math, chem, bio, phyc;
	cout<<"Enter the marks of the four subjects: "<<endl;
	cin>>math>>chem>>bio>>phyc;
	/*calculate the average*/
	float average;
	average=(math+chem+bio+phyc)/4;
	/*Get the grade*/
	if(average>=80 && average<=100)
	{
		cout<<"\nA";
	}
	else if(average>=70)
	{
		cout<<"\nB";
	}
	else if(average>=60)
	{
		cout<<"\nC";
	}
	else if(average>=50)
	{
		cout<<"\nD";
	}
	else if(average<50 && average>=0)
	{
		cout<<"\nE";
	}
	else
	{
		cout<<"Invalid Marks";
	}
	cout<<"\n Good Bye!!";
	return 0;
}
