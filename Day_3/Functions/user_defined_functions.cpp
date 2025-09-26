#include <iostream>

void happyBirthday(){
    for(int i=1;i<=4;i++){
        std::cout<<"Happy birthday To you\n";
    }
    std::cout<<"\n";
}

int main()
{
    /*
    Function = is a block of reusable code.
    */

    //call our function
    happyBirthday();
    happyBirthday();
    happyBirthday();
    return 0;
}