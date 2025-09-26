#include <iostream>
#include <ctime>

int main()
{
    /*
    IMPORTANCE OF RANDOM
    a) Game developement i.e random monster to show up/weather changes
    */
    //use current time as seed to Generate random numbers
    srand(time(0));
    
    //local variable to store our number
    int randNum = rand() % 5 + 1;

    //pick a case using the random number generated
    switch(randNum){
        case 1:
            std::cout<<"Won a Bumper Sticker!!\n";
            break;
        case 2:
            std::cout<<"Won a Tshirt!!\n";
            break;
        case 3:
            std::cout<<"Won a lunch!!\n";
            break;
        case 4:
            std::cout<<"Won a Gift Card!\n";
            break;
        case 5:
            std::cout<<"Won a Concert Ticket\n";
            break;
    }

    return 0;
}