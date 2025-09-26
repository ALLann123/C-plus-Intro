#include <iostream>

int main()
{
    /*
    While Loop = Repeate execution of a block of code a number of times
    */
   std::string name;

   while(name.empty()){
        std::cout<<"Enter your name: ";
        std::getline(std::cin, name);
   }

   std::cout<<"Hello, "<<name;



    return 0;
}