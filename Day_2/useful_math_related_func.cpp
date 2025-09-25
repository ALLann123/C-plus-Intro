#include <iostream>
#include <cmath>

int main()
{
    double x = 3;
    double y = 4;
    double z;

    // max return the greater value
    z = std::max(x, y);
    std::cout << "Greater Number: " << z << std::endl;

    // min the small number between the two
    z = std::min(x, y);
    std::cout << "Small Number: " << z << std::endl;

    //Pow method, raise a base to a given power
    z=pow(2,3);
    std::cout<<"Power: "<<z<<std::endl;

    //square root
    z=sqrt(x);
    std::cout<<"Square Root(3): "<<z<<std::endl;

    //round of
    z=round(z);
    std::cout<<"RoundOff: "<<z<<std::endl;

    
    return 0;
}