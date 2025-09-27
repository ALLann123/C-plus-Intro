#include <iostream>

double getArea(double length, double width);
double getPerimeter(double length, double width);
int main()
{
    double length;
    double width;

    // get the length and width
    std::cout << "Enter the Length: ";
    std::cin >> length;
    std::cout << "Enter the Width: ";
    std::cin >> width;

    // call the functions
    double a = getArea(length, width);
    double p = getPerimeter(length, width);

    // display
    std::cout << "Area= " << a << std::endl;
    std::cout << "Perimeter= " << p << std::endl;

    return 0;
}

double getArea(double length, double width)
{
    return length * width;
}
double getPerimeter(double length, double width)
{
    return length + length + width + width;
}