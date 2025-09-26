#include <iostream>

int main()
{
    std::string username, password;
    bool no_password=true;

    //get username
    std::cout<<"USERNAME>> ";
    std::cin>>username;

    if(username=="kali" || username=="root"){
        while(no_password){
            std::cout<<"Enter Password: ";
            std::cin>>password;

            //check the password
            if(password=="admin"){
                std::cout<<"Login Successfull!!";
                no_password=false;
            }
            else{
                std::cout<<"Wrong Password\n";
            }
        }
    }
    else{
        std::cout<<"USER DOESNOT EXIST!!"<<std::endl;
    }

    return 0;
}