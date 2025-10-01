#include <iostream>

std::string searchName(std::string db[], int size);
int main()
{
    std::string names[]={"Allan", "John", "Mark","Alvin","Moses", "Bonny", "Karis"};

    //get size of the array
    int size=sizeof(names)/sizeof(names[0]);

    //now call the search function
    searchName(names,size);

    return 0;
}
std::string searchName(std::string db[], int size){
    for(int i=0; i<size; i++){
        if(db[i]=="Karis"){
            std::cout<<"FOUND NAME: "<<db[i]<<"\n";
        }
    }
}