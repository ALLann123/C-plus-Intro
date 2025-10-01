#include <iostream>

int main()
{
    /*
    sizeof() = determines the size in bytes of a:
                variable, data type, class, objects, etc
    NOTE: The size of a data type is still the same even if its a different value
    */
    std::string name = "Allan";
    std::cout << "Size of the string: " << sizeof(name) << "\n";

    double price=19929;
    std::cout << "Size of Double type: " << sizeof(price) << "\n";

    std::string cars[]={"Toyota", "Mazda", "Isuzu"};

    std::cout << "Size of the Array: " << sizeof(cars) << "\n";

    char grade='F';

    std::cout << "Size of the Character: " << sizeof(grade) << "\n";

    bool alive=false;

    std::cout << "Size of a Bool: " << sizeof(alive) << "\n";

    return 0;
}