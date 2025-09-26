#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{
    /*
    Function = is a block of reusable code.
    */
    //call our function

    std::string name="O_T_N";
    int age=25;

    happyBirthday(name, age);
    //happyBirthday();
    //happyBirthday();
    return 0;
}

void happyBirthday(std::string name, int age){
    for(int i=1;i<=4;i++){
        std::cout<<"Happy birthday To "<<name<<"\n";
    }
    std::cout<<"You are "<<age<<" years old\n";
    std::cout<<"\n";
}

