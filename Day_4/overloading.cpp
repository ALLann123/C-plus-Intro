#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
int main()
{
    /*
    Overloading a function = Different versions of the same function name
    Its parameters are the function signatures.
    */
    bakePizza("Pepparoni", "Mushroom");

    return 0;
}

void bakePizza()
{
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1)
{
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Here is your " << topping1 <<" and "<<topping2<< " pizza!\n";
}