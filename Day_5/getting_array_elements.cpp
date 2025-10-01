#include <iostream>

int main()
{
    // we use the size of to get this
    std::string towns[] = {"Kitale", "Eldy", "Nakuru", "Nairobi"};

    // now how many elements are in the array
    std::cout << "Number of Elements= " << sizeof(towns) / sizeof(std::string) << "\n";

    int elements = sizeof(towns) / sizeof(std::string);

    // lets iterate through the array and display
    for (int i = 0; i < elements; i++)
    {
        std::cout << i + 1 << "." << towns[i] << "\n";
    }

    return 0;
}