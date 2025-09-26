#include <iostream>

int main()
{
    /*
    do..while loop = do a block of code first
                    Then repeat again if condition is true.
    USAGE: Can be used when playing a game
    */

    int number;

    do{
        std::cout<<"Enter a positive number: ";
        std::cin>>number;
    }while(number<0);

    std::cout<<"The Number: "<<number;

    return 0;
}