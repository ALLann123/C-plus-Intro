#include <iostream>

//Tell compiler what T is. Allows the function to work with any datatype
template <typename T, typename U>

//Function template that accepts any data type 
auto max(T x, U y){
    //ternary operator
    return (x>y) ? x:y;
}
    
int main()
{
    /*
    Function template = describe what a function looks like
    can be used to generate as many overloaded functions
    as needed, each using different data types
    */
    std::cout<<max(1.5,2)<<"\n";

    return 0;
}