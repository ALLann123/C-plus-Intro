#include <iostream>

int main()
{
    /*
    NULL value = a special value that means something has no value
    When a pointer is holding a null value,
    that pointer is not pointing at anything.

    nulptr = keyword represents a null pointer literal

    nullptrs are helpful in determining if an address has been
    succefully assigned to a pointer.
    When using pointers, be careful that your code isn't 
    dereferencing nullptr or pointing to free memory
    this will cause undefined behavior.
    */

    //created a pointer that we will reassign an address later
    int *pointer = nullptr;
    int x=123;

    pointer= &x;

    //we have to check if the null pointer was assigned a value
    if(pointer == nullptr){
        std::cout<<"Address was not assigned!\n";
    }
    else{
        std::cout<<"Address was assigned!\n";
        std::cout<<pointer<<": "<<*pointer;
    }


    return 0;
}