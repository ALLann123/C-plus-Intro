#include <iostream>

enum Day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3
};

enum Flavor
{
    vanilla,
    chocolate,
    strawberry,
    mint
};

enum Color
{
    red,
    orange,
    green,
    white
};

int main()
{
    /*
    enums = a user-defined data type that consists
     of paired named-integer constants
    Great if you have a set of potential options.
    */

    Day today = sunday;

    switch (today)
    {
    case sunday:
        std::cout << "Go to Church\n";
        break;
    case monday:
        std::cout << "Work\n";
        break;
    case tuesday:
        std::cout << "Running\n";
        break;
    case wednesday:
        std::cout << "Hair Cut\n";
        break;
    default:
        std::cout << "Unknown!!\n";
        break;
    }

    return 0;
}