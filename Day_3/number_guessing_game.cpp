#include <iostream>

int main()
{
    // seeding the random generator
    srand(time(NULL));

    int num;
    int guess;
    int tries;

    num = (rand() % 100) + 1;

    std::cout << "*********** Number Guessing Game ***********\n";

    // get user guess
    do
    {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Too High\n";
        }
        else if (guess < num)
        {
            std::cout << "Too Low\n";
        }
        else
        {
            std::cout << "CORRECT! # of tries: " << tries << std::endl;
        }
    } while (guess != num);

    std::cout << "**********************************************\n";

    return 0;
}