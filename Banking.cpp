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

void deposit (double amount){
    balance = balance + amount;
    cout<< "Deposited : Rs." << amount << endl;
}

void withdraw(double amount){
    if (anount <= balance) {
        balance=balance-amount;
        cout<<"withdraw: Rs."<< amount << endl;
    }else{
        cout<< "Insufficient Balance!" << endl;
    }
}

