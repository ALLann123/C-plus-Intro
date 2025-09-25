#include <iostream>

int main()
{
    char op;
    int num_1, num_2;
    int result;

    // get user input
    std::cout << "********** Calculator **********\n";

    std::cout << "Operation(+ - * /): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num_1;
    std::cout << "Enter Second number: ";
    std::cin >> num_2;

    // Case-Perform operation
    switch (op)
    {
    case '+':
        result = num_1 + num_2;
        std::cout << "Addition: " << result;
        break;
    case '-':
        result = num_1 - num_2;
        std::cout << "Subtraction: " << result;
        break;
    case '*':
        result = num_1 * num_2;
        std::cout << "Multiplication: " << result;
        break;
    case '/':
        result = num_1 / num_2;
        std::cout << "Division: " << result;
        break;
    default:
        std::cout << "Operation Not Found";
        break;
    }

    std::cout << "\n*********************************";

    return 0;
}
