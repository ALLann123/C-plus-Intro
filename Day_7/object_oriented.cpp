#include <iostream>

class Human
{
    // characteristics/Attributes
public:
    std::string name;
    std::string occupation;
    int age;

    // Method = FUnction that belongs to a class(Behaviour)
    void eat()
    {
        std::cout << "I am eating!!\n";
    }

    void drink()
    {
        std::cout << "I am drunk!!\n";
    }

    void sleep()
    {
        std::cout << "Sleeping!!\n";
    }
};

int main()
{
    // object = A collection of attributes and methods(functions)
    /*
    Object = realworld entity with both characteristics and behaviour
    Class = Blue print for creating objects.
    They could have characteristics and could perform actions
    Can be used to mimic real world items
    Created from a class which acts as a blue-print
    */

    // Create object
    Human human1;

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    std::cout << "Name: " << human1.name << "\n";
    std::cout << "Work: " << human1.occupation << "\n";
    std::cout << "Age: " << human1.age << "\n";

    //invoke the methods of the object
    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}