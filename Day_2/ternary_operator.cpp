#include <iostream>

int main()
{
    /*
    Ternary Operator ?: = replacement to an if/else statement
    Condition ? expression1 : expression2;
    */
    int number = 2;

    number % 2 == 1 ? std::cout << "Odd Number!!\n" : std::cout << "Even Number!!\n";

    //Another example
    bool hungry=true;

    hungry ? std::cout<<"I am Hungry" : std::cout<<"I am full";

    return 0;
}
