#include <iostream>

int main()
{
    // check the port and service
    int port;

    std::cout << "Enter the port>> ";
    std::cin >> port;

    // case statements
    switch (port)
    {
    case 21:
        std::cout << "FTP Port";
        break;
    case 22:
        std::cout << "SSH Port";
        break;
    case 23:
        std::cout << "Telnet Port";
        break;
    case 25:
        std::cout << "SMTP Server";
        break;
    case 80:
        std::cout << "HTTP";
        break;
    case 443:
        std::cout << "HTTPS";
        break;
    default:
        std::cout << "Unknown!!";
        break;
    }

    return 0;
}