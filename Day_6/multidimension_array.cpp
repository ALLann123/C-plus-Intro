#include <iostream>

int main()
{
    /*
    Create a 2d array
    */
    std::string students[][3]={{"Allan", "Karis","Mbugua"},
                                {"Yoh", "Are", "Who"},
                                {"Mark", "Jaba", "Alvin"}};
    
    //get the rows and columns for iterating through the array
    int rows=sizeof(students)/sizeof(students[0]);
    int columns=sizeof(students[0])/sizeof(students[0][0]);

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            std::cout<<students[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}