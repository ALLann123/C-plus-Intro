#include <iostream>

int main()
{
    /*
    A variable is a name associated by a value that can change during program execution.
    Def: Memory holder
    We list the data type of what we are storing
    */
    int x; // declaration
    // the variable above stores an integer
    x = 5;
    std::cout << x << std::endl;

    // do another
    int y = 6;
    std::cout << y << '\n';

    int sum = x + y;

    std::cout << "SUM: " << sum;
    return 0;
}