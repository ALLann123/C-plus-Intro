#include <iostream>
#include <ctime>
#include <cstdlib>

// function declaration
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        if (checkTie(spaces))
        {
            std::cout << "It's a tie!\n";
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        if (checkTie(spaces))
        {
            std::cout << "It's a tie!\n";
            break;
        }
    }

    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << "\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "   \n";
    std::cout << "_____|_____|_____\n";

    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "   \n";
    std::cout << "_____|_____|_____\n";

    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "   \n";
    std::cout << "\n";
}

void playerMove(char *spaces, char player)
{
    int number;
    do
    {
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
        if (number >= 0 && number < 9 && spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
        else
        {
            std::cout << "Invalid move, try again.\n";
        }
    } while (true);
}

void computerMove(char *spaces, char computer)
{
    int number;
    srand(time(0));
    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer)
{
    // All 8 win conditions
    int winCombos[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // rows
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8}, // cols
        {0, 4, 8},
        {2, 4, 6} // diagonals
    };

    for (auto &combo : winCombos)
    {
        if (spaces[combo[0]] != ' ' &&
            spaces[combo[0]] == spaces[combo[1]] &&
            spaces[combo[1]] == spaces[combo[2]])
        {

            if (spaces[combo[0]] == player)
            {
                std::cout << "YOU WIN!!\n";
            }
            else
            {
                std::cout << "YOU LOSE!!\n";
            }
            return true;
        }
    }
    return false;
}

bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false; // still empty spots
        }
    }
    return true; // all filled and no winner
}

/*

     |     |
  X  |  X  |  O
_____|_____|_____
     |     |
  O  |  X  |  O
_____|_____|_____
     |     |
     |     |  X

YOU WIN!!
*/