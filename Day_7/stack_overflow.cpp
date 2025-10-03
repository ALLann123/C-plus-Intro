#include <iostream>

void call_me(int tried);

int main()
{
    int t = 5;

    call_me(t);

    return 0;
}

void call_me(int tried)
{
    std::cout << "I tried to call you!!\n";
    call_me(tried);
}