#include <iostream>
#include <string>
using namespace std;


class Savings {
    string name;
    int accNo;
    double balance;

public:
    Savings(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = b;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "Deposited: Rs. " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawn: Rs. " << amount << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void addInterest(double rate) {
        double interest = balance * rate / 100;
        balance = balance + interest;

        cout << "Interest Added: Rs. " << interest << endl;
    }

    void show() {
        cout << "\n--- Savings Account ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};


class Checking {
    string name;
    int accNo;
    double balance;

public:
    Checking(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: Rs. " << amount << endl;
    }

    void withdraw(double amount, double fee) {
        double total = amount + fee;

        if (total <= balance) {
            balance -= total;
            cout << "Withdrawn: Rs. " << amount << endl;
            cout << "Transaction Fee: Rs. " << fee << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void show() {
        cout << "\n--- Checking Account ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};


int main() {

    Savings s("Raj", 101, 5000);
    Checking c("Amit", 102, 3000);

    s.show();

    s.deposit(1000);
    s.withdraw(2000);
    s.addInterest(3);

    s.show();


   
    c.show();

    c.deposit(1500);
    c.withdraw(1000, 20);

    c.show();

    return 0;
}