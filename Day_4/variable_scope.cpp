#include <iostream>

int myNum = 17;
void printNum();
int main()
{
    /*
    Local Variable = declared inside a function or block().
    Global Variables = declared outside of all functions.
    */

    int myNum = 1;

    std::cout << myNum << "\n";
    printNum();

    return 0;
}

void printNum()
{
    //int myNum = 2;
    std::cout << ::myNum << "\n";
}