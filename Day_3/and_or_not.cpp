#include <iostream>

int main()
{
    /*
    && = check if two conditions are true
    || = check if atleast one of the condition is true
    ! = reverses the logical state of the operand
    */
    int temp;

    //get input
    std::cout<<"Enter the Temperature>> ";
    std::cin>>temp;

    //check for multiple conditions

    if(temp>0 && temp <30){
        std::cout<<"The temperature is good.";
    }
    else{
        std::cout<<"The temperature is bad!!";
    }

    return 0;
}