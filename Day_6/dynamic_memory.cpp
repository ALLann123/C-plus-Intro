#include <iostream>

int main()
{
    /*
    Dynamic Memory = Memory that is allocated after the program
    is already compiled and running.
    Use the "new" operator to allocate memory in the heap rather than
    the stack. 
    Useful when we dont know how much memory we will need. Makes our
    program more flexible, especially when accepting user input
    */
    //the pointer
    int *pNum = NULL;

    //dynamically allocate memmory for the address at run time
    pNum =new int;

    *pNum=21;
    std::cout<<"address: "<<pNum<<"\n";

    //the address inthe heap contains the value displayed below
    std::cout<<"value: "<<*pNum<<"\n";
    

    //this prevents a memory leak. Delete the pointer
    delete pNum;

    return 0;
}