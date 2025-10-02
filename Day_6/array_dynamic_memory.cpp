#include <iostream>

int main()
{
    // create an array variable
    char *pGrades = NULL;

    int size;

    std::cout << "How many grades to enter in? " << std::endl;
    std::cin >> size;

    // allocate memory at runtime(on the heap). When we dont know the size of the array and user input
    pGrades = new char[size];

    // get the grades
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade # " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size;i++)
    {
        std::cout << pGrades[i] << " ";
    }

    // delete the dynamic allocated address after use to prevent memory leak
    // add [] for an array
    delete[] pGrades;

    return 0;
}