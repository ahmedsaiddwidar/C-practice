#include<iostream>

class bankAccount
{
    private:
    
    std::string accNumber;
    double balance;
    
    public:

    bankAccount(std::string &accNum, double bal): accNumber(accNum), balance(bal){}

    void deposit (double amount)
    {
        balance += amount;

        std::cout<<"deposit operation is successful\ncurrent balance = "<< balance<<std::endl;
    }
    void withdraw(double amount)
    {
        if(amount <= balance)
        {
            balance -= amount;

            std::cout<< "withdraw operationis successful\ncurrent balance = " << balance<<std::endl;
        }
        else
        {
            //do nothing
            std::cout<< "insufficient withdaraw operation"<<std::endl;

        }
    }
    ~bankAccount()
    {
        std::cout<<"thank you...";
    }

};

int main()
{
    std::string accountNumber = "ahmed98";
    double currentBalance = 1000;

    bankAccount bankAccount(accountNumber,currentBalance);

    double amount_deposite = 500, amount_withdraw = 750;

    bankAccount.deposit(amount_deposite);

    bankAccount.withdraw(amount_withdraw);

    amount_withdraw = 900;

    bankAccount.withdraw(amount_withdraw);
    return 0;
}