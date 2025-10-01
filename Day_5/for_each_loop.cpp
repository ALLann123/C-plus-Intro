#include <iostream>

int main()
{
    /*
    foreach loop = loop that eases the traversal over an
            iterable data set. 
    */
    
    std::string targets[]={"192.168.100.101","192.168.100.97","192.168.100.105"};

    for(std::string target: targets){
        std::cout<<target<<": Starting attack.....\n";
    }

    return 0;
}