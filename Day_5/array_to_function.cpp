#include <iostream>

//this is a function declaration
double getTotal(double prices[], int size);
int main()
{
    //When a function receives an Array it decays into a pointer
    double prices[]={190,470,27,53};

    //get the size of the array for our function
    int size = sizeof(prices)/sizeof(prices[0]);

    //call our function
    double total=getTotal(prices, size);

    std::cout<<"Total: $"<<total;

    return 0;
}

//we pass the size to the function
double getTotal(double prices[], int size){
    double total=0;
    for(int i=0; i<size; i++){
        return total=total+prices[i];
    }
}

