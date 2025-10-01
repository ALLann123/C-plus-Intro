#include <iostream>

int main()
{
    //symbo
    char symbol='*';

    for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            std::cout<<symbol<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}