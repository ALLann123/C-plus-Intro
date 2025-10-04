#include <iostream>

class Rectangle
{
public:
    double length;
    double width;
    // class constructor
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    // class methods
    void area()
    {
        std::cout << "AREA: " << length * width << "\n";
    }

    void perimeter()
    {
        std::cout << "PERIMETER: " << (length * 2) + (width * 2) << "\n";
    }
};
int main()
{
    // create an object
    Rectangle rect1(12, 8);

    rect1.area();
    rect1.perimeter();
    std::cout<<"\n";
    // another object
    Rectangle rect2(10,5);
    rect2.area();
    rect2.perimeter();
    return 0;
}