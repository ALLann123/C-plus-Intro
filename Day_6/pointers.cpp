#include <iostream>

int main()
{
    /*
    Pointers = variable that stores the memory address of
                another variable.
    Sometimes its easier to work with an address.
    & addres-of-operator
    * dereference operator
    */

    std::string name = "ALlan";
    int age = 28;

    //in the case of an array it is already a memory address
    std::string courses[4]={"IT","MLS","Medicine","BBC"};

    // create a pointer
    std::string *pName;
    pName = &name;
    int *pAge = &age;
    std::string *pCourses=courses;

    // display
    std::cout << "Name Address>> " << pName << "\n";
    std::cout << "Value in " << pName << " Address: " << *pName << "\n";

    std::cout << "Age: " << *pAge << "\n";
    std::cout<<"Courses: "<<*pCourses;

    return 0;
}