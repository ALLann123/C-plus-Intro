#include <iostream>

int main()
{
    /*
    Array- a data structure that can hold multiple values.
    Values are accessed by an index number.
    kind of like a variable that holds multiple values.
    They can only containe values of the same data type.
    When declaring an array and you want to assign later on provide a size
    
    */

    std::string students[]={"allan", "mbugua","karis"};

    for(int i=0; i<=2; i++){
        std::cout<<"Name: "<<students[i]<<"\n";
    }

    return 0;
}