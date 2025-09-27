#include <iostream>

std::string passStrength(std::string password);
int main()
{
    std::string password;

    //get the password
    std::cout<<"Password: ";
    std::cin>>password;

    //call function
    std::string feedback=passStrength(password);

    std::cout<<"Status: "<<feedback;


    return 0;
}
std::string passStrength(std::string password){
    if(password.length() >= 8){
        return "Stong Password";
    }
    else{
        return "Weak Password";
    }
}