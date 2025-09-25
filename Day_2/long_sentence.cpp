#include <iostream>

int main()
{
    std::string my_opinion;
    
    //lets get your view
    std::cout<<"Whats on your mind?";
    std::getline(std::cin, my_opinion);

    //display
    std::cout<<"Me: "<<my_opinion<<std::endl;

    return 0;
}