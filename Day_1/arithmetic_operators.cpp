#include <iostream>

int main()
{
    /*
    Arithmetic operators= return the result of a specific arithmetic operation
    (+ - * /)
    */
    int students = 20;

    students = students + 1;

    // if we need to add two students
    students += 2;

    // lets add one student again
    students++;

    std::cout << students << std::endl;

    // Subtraction
    students -= 1;

    // redice one again
    students--;

    std::cout << "Due to absentism: " << students << "\n";

    // Double the number of students
    students = students * 2;
    // double again
    students *= 2;

    std::cout << "All Classes: " << students << "\n";

    // Divid the class in half
    students = students / 3;

    // divide further
    students /= 3;

    std::cout << "Each class team: " << students << std::endl;

    // Modulus operator
    int reminder = students % 2;

    std::cout << reminder;

    return 0;
} 