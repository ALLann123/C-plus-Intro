#include <iostream>

int main()
{
    //create and assign the size of the array
    std::string languages[4];

    std::cout<<"Name 4 Computer languages: "<<std::endl;

    for(int i=0; i<=3; i++){     
        std::cin>>languages[i];
    }
    std::cout<<"**********************************\n";
    for(int i=0; i<=3; i++){
        std::cout<<i+1<<"."<<languages[i]<<"\n";
    }
    return 0;
}