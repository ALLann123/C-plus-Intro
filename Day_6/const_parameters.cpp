#include <iostream>

void printInfo(const std::string &name, const int &age);
int main()
{
    /*
    Const parameter = parameters that is read only code is
    more secure and conveys intent useful for reference and
    pointers.
    */

    std::string name="Mr.Robot";
    int age=25;

    printInfo(name, age);

    //It doesn't matter who we are, what matters is our plans


    return 0;
}
void printInfo(const std::string &name, const int &age){
    //age=20;
    std::cout<<"Name: "<<name<<"\n";
    std::cout<<"Age: "<<age<<"\n";
}