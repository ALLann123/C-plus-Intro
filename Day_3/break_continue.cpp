#include <iostream>

int main()
{
    /*
    break = break out of a loop
    continue = skip current iteration
    */
    for(int i=1;i<=20;i++){
        //we dont want number 13
        if(i==13){
            //break;
            continue;
        }
        std::cout<<i<<'\n';
    }
    return 0;
}