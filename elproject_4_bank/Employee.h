#pragma once
#include "Person.h"
#include "Client.h"
#include"FilesHelper.h"
#include <vector>
class Employee : public Person
{

protected:
    double salary;
    Client c;

public:
    Employee() { salary = 5000; }  // Minimum salary enforcement
    Employee(int id, string name, string pass, double salary) :Person(id, name, pass) {
        this->salary = salary;
    }

    void setSalary(double salary) {
        if (salary >= 5000) {
            this->salary = salary;
        }
        else {
            cout << "Salary must be at least 5000. ";
            this->salary = 5000;
        }
    }

    double getSalary() { return salary; }

    void addclient(Client& c) {
        //Client c;
        string n, p;
        int id;
        double b;
        cout << "enter employee name: ";
        cin >> n;
        cout << "enter employee id: ";
        cin >> id;
        cout << "enter employee salary: ";
        cin >> b;
        cout << "enter pass: ";
        cin >> p;
        c.set_name(n);
        c.setBalance(b);
        c.set_id(id);
        c.set_pass(p);
        //FilesHelper::saveClient(c);
    }

    Client* searchclient(int id, vector<Client>& c) {
        int x = 0;
        for (int i = 0; i < c.size(); i++) {
            if (c[i].get_id() == id) {
                return &c[i];
                x++;
            }
        }

        if (x > 0) {
            cout << "found";
        }
        else {
            cout << "not found!!";
        }

    }

    void Listclient(Client& c) {
        cout << "name: " << c.get_name() << endl
            << "id: " << c.get_id() << endl
            << "balance: " << c.getBalance() << endl
            << "password: " << c.get_pass() << endl;

    }

    void Editclient(int id, string name, string password, double balance, Client& c) {
        c.set_name(name);
        c.set_pass(password);
        c.setBalance(balance);

    }



    void print() {
        Person::print();
        cout << "Salary: " << getSalary();
    }



};