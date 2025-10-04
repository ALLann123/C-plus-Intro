#include <iostream>

class Stove
{
private:
    int temperature = 0;
    // We cannot edit the temp value but te "getter" makes it readable
public:
    int getTemperature()
    {
        return temperature;
    }

    //to make it writeable use a setter
    void setTemperature(int temperature){
        this->temperature =temperature;
    }
};

int main()
{
    /*
    Abstraction = hiding unnecessary data from the outside class
    getter = function that makes a private attribute READABLE
    setter = function that makes a private attribute WRITEABLE
    */

    Stove stove;

    stove.setTemperature(19000);

    std::cout << "TEMP SET: " << stove.getTemperature();
    return 0;
}