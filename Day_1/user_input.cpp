#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;
    std::string bio;

    std::cout << "What's your name?: ";
    std::cin >> name;

    std::cout << "How old are you? ";
    std::cin >> age;

    // Get more than one string as input
    std::cout << "In two words describe your self>> ";
    std::getline(std::cin >> std::ws, bio);

    std::cout << "Hello, " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    std::cout << "BIO: " << bio;

    return 0;
}