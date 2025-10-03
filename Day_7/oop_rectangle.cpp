#include <iostream>

class Rectangle
{
    // attributes
public:
    double length;
    double width;
    // methods
    void area()
    {
        std::cout << "AREA: " << length * width << "\n";
    }
    void perimeter()
    {
        std::cout << "Perimeter: " << (length * 2) + (width * 2) << "\n";
    }
};

int main()
{
    // create object
    Rectangle rect1;

    rect1.length = 90;
    rect1.width = 39;

    rect1.area();
    rect1.perimeter();

    return 0;
}