/*
Q4. Define a class to represent a bank account. Include the following members: 
    DATA MEMBERS                   	MEMBER FUNCTIONS
    ------------------------ 	------------------------------
    Name of depositor 		(1) To assign initial values
    Account Number 		(2) To Deposit the amount
    Type of Account 		(3) To withdraw an amount after checking the
    Balance amount in account 	(4) To display name and balance
*/
// ===================================================================================================================================================================================
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string depositorName;
    long accountNumber;
    char accountType;
    double balance;

public:
    
    BankAccount(string name, long accNumber, char accType, double initialBalance) 
    {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

   
    void deposit(double amount) 
    {
        balance += amount;
        cout << "Deposit successful. Current balance: " << balance << endl;
    }

    
    void withdraw(double amount) 
    {
        if (balance >= amount) 
        {
            balance -= amount;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        } 
        else 
        {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    
    void display() 
    {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
   
    BankAccount account1("Sahadev", 42351545, 'S', 5000.0);
    account1.deposit(1000.0);
    account1.withdraw(800.0);
    account1.display();
    

    return 0;
}