#include <iostream>
using namespace std;
int main()
{
	/*program takes in basic salary and compute net salary*/
	double basic_salary, house_all, transport, net_salary;
	cout<<"Enter Basic Salary: ";
	cin>>basic_salary;
	
	if(basic_salary>=20000)
	{
		house_all=(12.0/100) * basic_salary;
		transport=(22.0/100)*basic_salary;
		net_salary=basic_salary+house_all+transport;
		cout<<"house_allowance: "<<house_all<<endl;
		cout<<"transport allowance: "<<transport<<endl;
		cout<<"\nTotal Earnings: "<<net_salary<<endl;
	}
	else{
		house_all=(10.0/100)*basic_salary;
		transport=(20.0/100)*basic_salary;
		net_salary=basic_salary+house_all+transport;
		cout<<"house_allowance: "<<house_all<<endl;
		cout<<"transport allowance: "<<transport<<endl;
		cout<<"\nTotal Earnings: "<<net_salary<<endl;
	}
	return 0;
}
