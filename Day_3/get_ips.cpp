#include <iostream>

int main()
{
    std::string ip;

    ip="192.168.100";

    for(int i=101;i<=115;i++){
        std::cout<<ip<<"."<<i<<std::endl;
    }

    return 0;
}