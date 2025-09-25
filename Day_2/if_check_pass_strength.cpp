#include <iostream>

int main()
{
    std::string password;

    std::cout << "PASSWORD CHECKER CLI" << std::endl;

    // get the password from user
    std::cout << "Enter password: ";
    std::cin >> password;

    double pass_length = password.length();

    if (pass_length >= 8)
    {
        std::cout << '\n'
                  << "Strong Password!!";
    }
    else if (pass_length >= 12)
    {
        std::cout << "\n"
                  << "Very Very Strong password!!";
    }
    else
    {
        std::cout << "\n"
                  << "Weak Password!!";
    }

    return 0;
}