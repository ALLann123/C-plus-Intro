#include <iostream>

class Circle
{
public:
    double r;
    const double pi = 3.142;
    // methods
    void area()
    {
        std::cout << "AREA: " << pi * r * r << "\n";
    }

    void circumference()
    {
        std::cout << "CIRCUM: " << pi * (r + r) << "\n";
    }
};

int main()
{
    // create an object
    Circle circ1;

    double radius;

    // get user input
    std::cout << "Enter Radius: ";
    std::cin >> radius;

    
    circ1.r = radius;

    // call object behaviour
    circ1.area();
    circ1.circumference();

    return 0;
}