#include <iostream>

using text_t = std::string;
using number_t = int;

int main()
{
    text_t firstName = "Allan";

    std::cout << "First Name: " << firstName << std::endl;

    number_t age = 23;
    std::cout << "AGE: " << age;

    return 0;
}