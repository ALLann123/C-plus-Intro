#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(std::string topping1){
        this->topping1=topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1=topping1;
        this->topping2=topping2;
    }
    Pizza(){
        
    }
};
int main(){
    /*
    Overloaded Constructors = multiple constructors with the same
    name but different parameters allows for varying arguments when
    creating an object.
    */
   Pizza pizza1("paparoni");
   Pizza pizza2("mushroom", "pappers");
   Pizza pizza3;

   std::cout<<pizza1.topping1<<"\n";
   std::cout<<pizza2.topping1<<"\n";
   std::cout<<pizza2.topping2<<"\n";


    return 0;
}