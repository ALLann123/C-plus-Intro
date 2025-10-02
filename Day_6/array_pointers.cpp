#include <iostream>

int main()
{
    //in the case of an array it is already a memory address
    std::string courses[4]={"IT","MLS","Medicine","BBC"};

    int size=sizeof(courses)/sizeof(courses[0]); 

    //create a pointer
    std::string *pCourses=courses;

    for(int i=0; i<size; i++){
        std::cout<<*(pCourses+i)<<"\n";
    }

    return 0;
}