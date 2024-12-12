#include <iostream>
using namespace std;

class Employee {
protected:
    double basic, t_allow, h_allow, net_sal;

public:
    void get_input();
    void get_gross();
    void get_output();
};

class Boss : public Employee {
protected:
    double ent_allow, r_allow;

public:
    void get_input();
    void get_output();
};

int main() {
    Employee emp;
    Boss b;

    cout << "Enter details for an Employee:" << endl;
    emp.get_input();
    emp.get_gross();
    emp.get_output();

    cout << "\nEnter details for a Boss:" << endl;
    b.get_input();
    b.get_output();

    return 0;
}

// Employee Class Methods
void Employee::get_input() {
    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout << "Enter Total Allowance: ";
    cin >> t_allow;
    cout << "Enter House Allowance: ";
    cin >> h_allow;
}

void Employee::get_gross() {
    net_sal = basic + t_allow + h_allow;
}

void Employee::get_output() {
    cout << "\nSalary Earned: " << net_sal << endl;
}

// Boss Class Methods
void Boss::get_input() {
    Employee::get_input(); // Call the base class method
    cout << "Enter Entertainment Allowance: ";
    cin >> ent_allow;
    cout << "Enter Responsibility Allowance: ";
    cin >> r_allow;
}

void Boss::get_output() {
    net_sal = basic + t_allow + h_allow + ent_allow + r_allow; // Include all allowances
    cout << "\nSalary Earned (Boss): " << net_sal << endl;
}

