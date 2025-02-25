#pragma once
#include "Person.h"
class Client : public Person
{
private:
    double balance;
public:
    Client() { balance = 0.0; }
    Client(int id, string name, string pass, double balance) : Person(id, name, pass), balance(0.0) {

        if (Validation::check_balance(balance)) {
            this->balance = balance;
        }
        else {
            cout << "The minimum balance we accept is 1500.\n";
            balance = 0.0;
        }
    }

    void setBalance(double balance) {
        if (Validation::check_balance(balance)) {
            this->balance = balance;
        }
        else {
            cout << "The minimum balance we accept is 1500.\n";
        }
    }

    double getBalance() { return balance; }
    void print() {
        Person::print();
        cout << "your balance: " << getBalance();
    }


    double Deposit(double amount) {
        this->balance = balance + amount;
        return balance;
    }
    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "you can not exceed the balance :" << endl;
            return false;
        }
        else {
            this->balance = balance - amount;
            return true;
        }
    }
    double Convert_his_currency_take_it_now(double amount) {   //assume 1 doller=50 pound;      //fawry
        cout << "(a)-pound----->doller" << "\t (c) doller------>pound" << endl;
        cout << "enter your choice (a,c) :" << endl;
        char c;
        cin >> c;
        if (c == 'a' || c == 'A') {
            return amount / 50;

        }
        else if (c == 'c' || c == 'C') {
            return amount * 50;
        }
        else {
            cout << "Invalid choice!\n";
            return 0;
        }
    }
    double Convert_his_currency_transfer_to_my_account(double amount) {   //assume 1 doller=50 pound, and assume my account (pound)
        balance = balance + amount * 50;                                 // so the many convert directly from doller to pound
        return balance;
        //bankAccount
    }
    double transfer_to(Client& c, double amount) {       //pound
        if (amount > balance) {
            cout << "you can not exceed the balance :" << endl;

        }
        else {
            c.balance = c.balance + amount;
            balance = balance - amount;
            cout << " the transfer is done your balance now : " << balance << endl;

        }
        return balance;
    }
    void Fixed_Deposit() {
        cout << "Choose the date to take your money" << endl;
        cout << "If you choose one year, you will receive 10 percent interest " << endl;
        cout << "If you choose two year, you will receive 15 percent interest " << endl;
        cout << "If you choose three years, you will receive 20 percent interest " << endl;
        cout << "NOTE if you take your money bofre the date you will not take any interest" << endl;
        cout << "choose (1,2,3)year" << endl;
        int x, amount;
        cin >> x;
        cout << "enter your amount to calculate the interest: ";
        cin >> amount;
        if (x == 1) {
            cout << "the your interest will be :" << amount * 0.1 + balance;
        }
        else if (x == 2) {
            cout << "the your interest will be :" << amount * 0.15 + balance;
        }
        else if (x == 3) {
            cout << "the your interest will be :" << amount * 0.2 + balance;
        }
        else {
            return;
        }


    }
    void print_info_loan() {
        cout << "?? Do you need a loan? We are here to help you! ??" << endl
            << "Our bank offers a variety of loans designed to suit your different needs" << endl <<
            ",whether you need personal financing, buying a home," << endl <<
            " or supporting your project.Choose the right loan for you and enjoy flexible terms and distinctive benefits" << endl;
        cout << "?? Types of loans available:" << endl;
        cout << "Personal Loan" << endl;
        cout << "Auto Loan" << endl;
        cout << "Mortgage  Loan" << endl;
        cout << "Small Business Loan" << endl;
        cout << "Education  Loan" << endl;
        cout << "Secured  Loan" << endl;
        cout << "For more details and to apply, visit your nearest branch" << endl;
    }

};
