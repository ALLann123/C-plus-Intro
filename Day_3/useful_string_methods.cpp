#include <iostream>

int main()
{
    std::string name;

    //accept user input
    std::cout<<"Enter name: ";
    std::getline(std::cin,name);

    //get the length of a string
    if(name.length()>12){
        std::cout<<"Name cant be over 12 characters!!";
    }
    else{
        std::cout<<"Welcome: "<<name<<std::endl;
    }

    //empty() returns a bool
    if(name.empty()){
        std::cout<<"You didn't enter your name!!";
    }
    else{
        std::cout<<"Hello "<<name<<std::endl;
    }

    //clear
    //name.clear();
    //std::cout<<"Hey "<<name<<"\n";

    //append- Add a string to another string
    name.append("@gmail.com");
    std::cout<<"EMAIL: "<<name<<"\n";
    return 0;
}