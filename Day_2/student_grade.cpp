#include <iostream>

int main()
{
    char grade;

    std::cout << "Enter Grade: ";
    std::cin >> grade;

    char upper_grade = std::toupper(grade);

    switch (upper_grade)
    {
    case 'A':
        std::cout << "You did great";
        break;
    case 'B':
        std::cout << "Good trial";
        break;
    case 'C':
        std::cout << "Pass";
        break;
    case 'D':
        std::cout << "Put more effort";
        break;
    case 'E':
        std::cout << "Adviced to repeat";
        break;
    default:
        std::cout << "INVALID!!";
        break;
    }

    return 0;
}