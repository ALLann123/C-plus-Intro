#include <iostream>

int main()
{
    //2 Dimentional arrays

    std::string cars[][3]={{"Mustang", "Escape", "F-150"}, 
                           {"Corvett", "Equinox", "Silverado"},
                           {"Challenger", "Durango", "Ram 1500"}};
    
    std::cout<<cars[0][0]<<" ";
    std::cout<<cars[0][1]<<" ";
    std::cout<<cars[0][2]<<"\n";
    std::cout<<cars[1][0]<<" ";
    std::cout<<cars[1][1]<<" ";
    std::cout<<cars[1][2]<<"\n";
    std::cout<<cars[2][0]<<" ";
    std::cout<<cars[2][1]<<" ";
    std::cout<<cars[2][2]<<"\n";

    return 0;
}