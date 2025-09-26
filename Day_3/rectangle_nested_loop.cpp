#include <iostream>

int main()
{
    int rows;
    int columns;
    char symbol;

    std::cout<<"How many Rows: ";
    std::cin>>rows;

    std::cout<<"How many Columns: ";
    std::cin>>columns;

    std::cout<<"SYMBOL:  ";
    std::cin>>symbol;

    for(int j=1; j<=rows;j++){
        for(int i=1;i<=columns;i++)
        {
            std::cout<<symbol<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}