#/*include<iostream>
using namespace std;

class BankAccount{

    //default in c++ they are private
    int accNumber;
    double balance;

    BankAccount(int accNumber,double balance){
        this->accNumber = accNumber;
        this->balance = balance;
    }

    ~BankAccount()
    {
    cout << "Account Closed";
    }

    public:
    void deposite(double amt){
        balance += amt;
    }
    void withhdraw(double amt){
        if(amt<=balance)
            balance -= amt;
        else
            cout << "No balance";
    }
    double getBalance() { 
        return balance; 
    }
};

class SavingsAccount : public BankAccount{
    double interestRate;

public:
    SavingsAccount(int acc, double bal, double r) : BankAccount(acc, bal), interestRate(r)
    {

    }
    void applyInterest()
    {
        deposit(getBalance() * (interestRate / 100));
    }
};
int main()
    {
        int acc_num;
        double initial_bal;
        double rate;
        cout << "Enter account number,initial Balance,Rate:\n";
        cin >> acc_num >> initial_bal >> rate;
        return 0;
    }*/