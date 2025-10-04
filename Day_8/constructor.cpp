#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    //has same name as the class
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};
int main()
{
    /*
    Constructor = special method that is automatically called when
    an object is instantiated. usefull for assigning values to 
    attributes as arguments.
    */

    Student student1("Alan", 25, 3.2);

    //display
    std::cout<<"Name: "<<student1.name<<"\n";
    std::cout<<"AGE: "<<student1.age<<"\n";
    std::cout<<"GPA: "<<student1.gpa<<"\n";

    return 0;
}