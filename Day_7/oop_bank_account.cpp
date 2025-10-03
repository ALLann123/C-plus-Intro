#include <iostream>

class Bank
{
    // Attributes
public:
    std::string accountNumber;
    double balance=0;
    // Behaviour
    void deposit()
    {
        double amount;
        std::cout << "Enter amount: ";
        std::cin >> amount;
        balance = balance + amount;
    }

    void withdraw()
    {
        double amount;
        std::cout << "Amount to Withdraw>> ";
        std::cin >> amount;
        if (amount > balance)
        {
            std::cout << "Insufficient Funds!!\n";
        }
        else
        {
            balance = balance - amount;
            std::cout << "Current Balance: " << balance << "\n";
        }
    }

    void display_balance()
    {
        std::cout << "\nAccount: " << accountNumber << "\n"
                  << "Balance: " << balance;
    }
};
int main()
{
    // object
    Bank myBank;

    myBank.accountNumber="Allan123";
    myBank.balance=5000;

    //Methods
    myBank.deposit();
    myBank.withdraw();
    myBank.display_balance();

    return 0;
}