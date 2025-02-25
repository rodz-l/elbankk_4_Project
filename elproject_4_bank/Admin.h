#pragma once
#include "Employee.h"
class Admin : public Employee
{

public:
    Admin() {}
    Admin(int id, const string& name, const string& password, double salary)
        : Employee(id, name, password, salary) {
    }
    void print() {
        Employee::print();
    }


    void addemployee(Employee& e) {
        string n, p;
        int id;
        double s;
        cout << "enter employee name: ";
        cin >> n;
        cout << "enter employee id: ";
        cin >> id;
        cout << "enter employee salary: ";
        cin >> s;
        cout << "enter pass: ";
        cin >> p;
        e.set_name(n);
        e.setSalary(s);
        e.set_id(id);
        e.set_pass(p);

    }

    Employee* searchemployee(int id, vector<Employee>& e) {
        int x = 0;
        for (int i = 0; i < e.size(); i++) {
            if (e[i].get_id() == id) {
                cout << "found";
                return &e[i];
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

    void Listemployee(Employee& e) {
        cout << "name: " << e.get_name() << endl
            << "id: " << e.get_id() << endl
            << "balance: " << e.getSalary() << endl
            << "password: " << e.get_pass() << endl;

    }

    void Editemployee(int id, string name, string password, double salary, Employee& e) {
        e.set_name(name);
        e.set_pass(password);
        e.setSalary(salary);

    }




};