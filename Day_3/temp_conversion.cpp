#include <iostream>

int main()
{
    double temp;
    char unit; 

    std::cout<<"********** Temperature Conversion **********\n";
    std::cout<<"f =Fahrenheit\n";
    std::cout<<"C =Celsius\n";
    std::cout<<"What unit would you like to convert to: ";
    std::cin>>unit;

    if(unit == 'F' || unit == 'f'){
        std::cout<<"Enter the temperature in Celcius>> ";
        std::cin>>temp;

        //perform conversion
        temp=(1.8*temp)+32.0;
        std::cout<<"Temperature is: "<<temp<<"F"<<std::endl;
    }
    else if(unit == 'c' || unit == 'C'){
        std::cout<<"Enter the temperature in Fahrenheit>> ";
        std::cin>>temp;

        //perform conversion
        temp=(temp-32)/1.8;
        std::cout<<"Temperature is: "<<temp<<"C"<<std::endl;
    }
    else{
        std::cout<<"Please Enter only C/F\n";
    }

    std::cout<<"***********************************************\n";

    /*
    In C++ single quotes(') ar used for a single character, while double quotes ("") are used for strings.
    */

    return 0;
}