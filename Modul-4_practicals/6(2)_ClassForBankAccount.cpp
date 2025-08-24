//2. Class for Bank Account
//o Create a class BankAccount with data members like balance and member functions
//like deposit and withdraw. Implement encapsulation by keeping the data members
//private.
//o Objective: Understand encapsulation in classes.

#include<iostream>
using namespace std;

class BankAccount
{
	private:
	    double balance;  // data member is private (Encapsulation)
	
	public:
    // Constructor
    BankAccount(double initialBalance = 0)
	{
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Deposit function
    void deposit(double amount)
	{
        if (amount > 0)
		{
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } 
		else
		{
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount)
	{
        if (amount > 0 && amount <= balance)
		{
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } 
		else
		{
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Show balance
    void showBalance()
	{
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    double initial;
    cout << "Enter initial balance: ";
    cin >> initial;

    BankAccount account(initial);

    int choice;
    do {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
		{
            double amount;
            cout << "Enter deposit amount: ";
            cin >> amount;
            account.deposit(amount);
        } 
        else if (choice == 2)
		{
            double amount;
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            account.withdraw(amount);
        } 
        else if (choice == 3)
		{
            account.showBalance();
        } 
        else if (choice == 4)
		{
            cout << "Thank you! Exiting..." << endl;
        } 
        else
		{
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}

