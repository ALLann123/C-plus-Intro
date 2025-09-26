#include <iostream>

int main()
{
    //pseudo-random = NOT truly random(but close)
    srand(time(NULL));

    //get random numbers between 1-6
    int num_1 = (rand() % 6) +1;
    int num_2 = (rand() % 6) +1;
    int num_3 = (rand() % 6) +1;

    std::cout<<num_1<<"\n";
    std::cout<<num_2<<"\n";
    std::cout<<num_3<<"\n";

    return 0;
}