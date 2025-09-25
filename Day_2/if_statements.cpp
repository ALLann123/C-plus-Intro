#include <iostream>

int main()
{
    /*
    If statements- Do something if a condition is true.
    If not then dont do it
    */
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= 120)
    {
        std::cout << "You are too old to enter the site!!";
    }
    else if (age >= 18)
    {
        std::cout << "Welcome to the site" << std::endl;
    }
    else if (age < 0)
    {
        std::cout << "You haven't been born yet!!";
    }
    else
    {
        std::cout << "You are not old enough to enter!!" << '\n';
    }

    return 0;
}