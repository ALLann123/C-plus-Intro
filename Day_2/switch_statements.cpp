#include <iostream>

int main()
{
    /*
    Switch= alternative of using many "else if" statements
    Compare one value against matching cases
    */
    int day;

    std::cout<<"Enter the day of the week: ";
    std::cin>>day;

    switch(day){
        case 1:
            std::cout<<"Its Monday";
            break;
        case 2:
            std::cout<<"Its Tuesday";
            break;
        case 3:
            std::cout<<"Its Wednesday";
            break;
        case 4:
            std::cout<<"Its Thursday";
            break;
        case 5:
            std::cout<<"Its Friday";
            break;
        case 6:
            std::cout<<"Its Saturday";
            break;
        case 7:
            std::cout<<"Its Sunday";
            break;
        default:
            std::cout<<"INVALID INPUT!!";
            break;
    }
    
    return 0;
}