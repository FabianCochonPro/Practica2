#include <string>
class Account 
{
    public:
    Account(std::string accountName, int initialBalance)
        : name{accountName}
        {
            if (initialBalance > 0)
            {
                balance=initialBalance;
            }
        }
        void deposit(int depositAmount)
        {
            if (depositAmount >0 )
            {
                balance = balance + depositAmount;
            } 
        }
        int getBalance() const 
        {
            return balance;
        }
        std::string getName() const 
        {
            return name;
        }
    private:
    std::string name;
    int balance{0};
};