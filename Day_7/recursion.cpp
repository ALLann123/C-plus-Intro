#include <iostream>

void walk(int steps);
int main()
{
    /*
    Recursion= a programming technique where a function
    invokes itself from within 
    break a complex concept into a repeatable single step

    iterative vs recursive

    advantages = less code and is cleaner
    Useful for sorting and searching algorithms

    disadvantages = uses more memory and slower

    When we fail to add a condition to the function we get a stack overflow
    
    */

    int steps;
    std::cout<<"How many steps to you want to take>> ";
    std::cin>>steps;

    walk(steps);

    return 0;
}

void walk(int steps){
    if(steps>0){
        std::cout<<"You take a step!!\n";
        //recursive function calling
        walk(steps - 1);
    }
}

