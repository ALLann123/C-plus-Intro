#include <iostream>

//function declaration
void sort(int array[], int size);
int main()
{
    /*
    Bubble Sort: Simplest sorting algorithm that works by
    repeatedly swapping adjacent elements if they are in the
    wrong order(descending/ Ascending)
    NOTE: When used with large data sets its slow
    */

    int array[]={2,5,1,3,7,86,23,64,23,66,85,39};
    int size=sizeof(array)/sizeof(array[0]);

    sort(array, size);
    //display the arrays
    for(int element: array){
        std::cout<<element<<" ";
    }

    return 0;
}

//write a function to do the sort
void sort(int array[], int size){
    //temp variable to perfom the swaps
    int temp;
    for(int i=0; i<size-1 ;i++){
        for(int j=0; j<size-1; j++){
            //perfom the swap
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}