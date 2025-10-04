#include <iostream>

// parent class
class Animal
{
public:
    bool alive = true;

    // method
    void eat()
    {
        std::cout << "This animal is eating\n";
    }
};

// Child class
class Dog : public Animal
{
public:
    void bark()
    {
        std::cout << "WOOF! WOOF!\n";
    }
};

// Child class
class Cat : public Animal
{
public:
    void meow()
    {
        std::cout << "The cat goes meowwww!\n";
    }
};
int main()
{
    // Inheritance = A class can receive attributes and methods from another class
    //   Children classes inherit from a parent class
    //   Helps us to reuse similar code found within multiple classes

    Dog dog;

    std::cout << dog.alive << "\n";

    dog.eat();
    dog.bark();

    Cat cat;

    cat.eat();
    cat.meow();
    //cat.bark()

        return 0;
}