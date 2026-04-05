#include <iostream>
using namespace std;

int main() {
    double balance = 1000;
    int choice;
    double money;

    cout << "1-Deposit 2-Withdraw: ";
    cin >> choice >> money;

    switch(choice) {
        case 1: balance += money; break;
        case 2: balance -= money; break;
    }

    cout << "Balance: " << balance;
}
