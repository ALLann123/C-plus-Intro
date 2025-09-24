#include <iostream>

int main()
{
    /*
    Const keyword specifies that a variable's value is constant
    -Tells the compile to prevent anything from modifying it
    -READ-ONLY
    */

    // lets write the program to calculate circumference of a circle
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    // display answer
    std::cout << circumference << "cm";

    return 0;
}