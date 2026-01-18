#include <iostream>
using namespace std;

class Account {
    double balance; 
public:

    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid Amount" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Account acc;
    acc.deposit(1000);

    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
