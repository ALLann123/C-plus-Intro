#include <iostream>

void swap(std::string &x, std::string &y);
int main()
{
    /*
    Pass_by val we are creating copies of the original values
    pass_by_refrence allows us to pass a values memory address 
    allowing us to work with the original value.
    */
    std::string x = "Kool-Aid";
    std::string y = "water";

    swap(x, y);

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";

    return 0;
}
//passing by value- creates copies
/*void swap(std::string x, std::string y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
*/
//pass by refrence - we access the values memory address
void swap(std::string &x, std::string &y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}