#include <iostream>
#include <cmath>

int main()
{
    double length;
    double width;
    double c;
    double a, b;

    //get the length and width
    std::cout<<"Enter Length>> ";
    std::cin>>length;

    std::cout<<"Enter Width>> ";
    std::cin>>width;

    a=pow(length,2.0);
    b=pow(width, 2.0);

    c=sqrt(a+b);
    std::cout<<"Hypotenuse= "<<c<<'\n';

    return 0;
}