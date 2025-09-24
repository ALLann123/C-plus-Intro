#include <iostream>

int main()
{
    /*
    Data Type specifies the type of data a variable can hold
    Integer(int)- Whole number
    */
    int age = 21;
    int year = 2023;
    int days = 7;
    std::cout << "AGE:" << age << std::endl;

    // Double (number, inluding decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temp = 25.1;

    std::cout << "GPA: " << gpa << '\n';

    // Single character
    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';

    std::cout << initial;

    // boolean(true/false)-SOmething that has two states
    // bool student = true;
    // bool power = false;
    // bool forSale = true;

    // Strings(Object that represents a sequence of text)
    std::string name = "Allan";
    std::string day = "Friday";
    std::string food = "Chapati";
    std::string address = "123 Fake St.";
    std::string target_ip = "192.168.100.107";

    std::cout << "My name is:" << name << std::endl;
    std::cout << "Target IP>> " << target_ip << std::endl;
    std::cout << "Favorite Food: " << food << std::endl;

    return 0;
}