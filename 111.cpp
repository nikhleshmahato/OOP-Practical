#include <iostream>
using namespace std;

class BankAccount {
    string name;
    long accNum;
    string type;
    double balance;

public:
    void openAccount() {
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Account Number: "; cin >> accNum;
        cout << "Enter Account Type: "; cin >> type;
        cout << "Enter Initial Balance: "; cin >> balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit Successful. Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if(balance >= amount) {
            balance -= amount;
            cout << "Withdrawal Successful. Balance: " << balance << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNum << endl;
        cout << "Type: " << type << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    b.openAccount();
    b.deposit(5000);
    b.withdraw(2000);
    b.display();
    return 0;
}
