#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    char accountType;
    double balance;

public:
    BankAccount() {
        depositorName = "";
        accountNumber = 0;
        accountType = ' ';
        balance = 0.0;
    }

    void initializeAccount(string name, int accNum, char type, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = type;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }

    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount accounts[10]; 
    for (int i = 0; i < 10; i++) {
        string name;
        int accNum;
        char type;
        double initialBalance;

        cout << "Enter details for customer " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Account Number: ";
        cin >> accNum;
        cout << "Account Type (S for Savings, C for Checking): ";
        cin >> type;
        cout << "Initial Balance: ";
        cin >> initialBalance;

        accounts[i].initializeAccount(name, accNum, type, initialBalance);
    }
    for (int i = 0; i < 10; i++) {
        cout << "Customer " << i + 1 << " Account Details:" << endl;
        accounts[i].display();

        double depositAmount, withdrawAmount;
        cout << "Enter deposit amount for customer " << i + 1 << ": ";
        cin >> depositAmount;
        accounts[i].deposit(depositAmount);

        cout << "Enter withdrawal amount for customer " << i + 1 << ": ";
        cin >> withdrawAmount;
        accounts[i].withdraw(withdrawAmount);

        cout << "Updated Account Details:" << endl;
        accounts[i].display();
    }

    return 0;
}

