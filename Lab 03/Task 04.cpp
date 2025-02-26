#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    float balance;

public:
    BankAccount() {
        accountNumber = 0;
        balance = 0;
    }

    BankAccount(int accNum, float initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount d1;
    d1.display();

    BankAccount d2(12345, 5000);
    d2.display();

    return 0;
}
