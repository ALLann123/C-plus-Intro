#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{
    /*
    Struct = A structure that goups related variables under one name

    Structs can contain main different data types(Strings, Int, Double)
    Variables in a struct are known as "members"
    members can be accessed with. "Class Member Access Operator"

    We can set default values for specific variables.
    
    */

    student student1;
    student1.name="Eliot";
    student1.gpa=3.2;
    student1.enrolled=true;

    std::cout<<"Name: "<<student1.name<<"\n";
    std::cout<<"GPA: "<<student1.gpa<<"\n";
    std::cout<<"Enrolled: "<<student1.enrolled<<"\n";
    std::cout<<"\n";

    student student2;
    student2.name="Patrick";
    student2.gpa=2.4;
    student2.enrolled=true;

    std::cout<<"Name: "<<student2.name<<"\n";
    std::cout<<"GPA: "<<student2.gpa<<"\n";
    std::cout<<"Enrolled: "<<student2.enrolled<<"\n";
    std::cout<<"\n";

    student student3;
    student3.name="Mish";
    student3.gpa=4.0;
    student3.enrolled=false;

    std::cout<<"Name: "<<student3.name<<"\n";
    std::cout<<"GPA: "<<student3.gpa<<"\n";
    std::cout<<"Enrolled: "<<student3.enrolled<<"\n";
    std::cout<<"\n";

    return 0;
}