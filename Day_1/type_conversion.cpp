#include <iostream>

int main()
{
    /*
    type conversion=Conversion of a value of one data type
    to another.
    Performed in two ways:
        Implicit=automatic
        Explicit=Precede value with new data type(int)
    */
    double x = (int)3.14;

    std::cout << x << std::endl;

    char y = 100;

    std::cout << y<<std::endl;

    // EXAMPLE:
    int correct = 8;
    int questions = 10;
    double score = correct /(double) questions * 100;

    std::cout << score << "%" << '\n';

    return 0;
}