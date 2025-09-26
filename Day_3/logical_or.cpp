#include <iostream>

int main()
{
    std::string username;

    //get user input
    std::cout<<"Enter Username/Email>: ";
    std::cin>>username;

    //check for multiple conditions
    if(username=="root" || username=="root@kali.com"){
        std::cout<<"Correct USER!!";
    }
    else{
        std::cout<<"Username Not found!!";
    }

    return 0;
}