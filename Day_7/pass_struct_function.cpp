#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);
int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2005;
    car2.color = "Green";

    printCar(car1);
    std::cout << "\n";
    printCar(car2);

    std::cout << "\n";
    std::cout << "Repainted Car: " << "\n";
    paintCar(car1, "silver");

    return 0;
}
// display the struct
void printCar(Car &car)
{
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}

// paint car
void paintCar(Car &car, std::string color)
{
    car.color = color;
    std::cout << car.model << "\n";
    std::cout << car.color << "\n";
}