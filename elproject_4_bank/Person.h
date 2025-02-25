#pragma once
#include <iostream>
#include <string>
#include "Validation.h"
class Person
{
protected:
    int id;
    string name, pass;



public:

    // defualt constructor
    Person() { id = 0; }
    Person(int id, string name, string pass) {
        this->id = id;
        if (Validation::check_name(name)) {
            this->name = name;
        }
        else {
            cout << "the name you entered wrong \n";
        }
        if (Validation::check_pass(pass)) {
            this->pass = pass;
        }
        else {
            cout << "the password you entered wrong \n";
        }
    }
    //setters
    void set_id(int id) { this->id = id; }
    void set_name(string name) {
        if (Validation::check_name(name)) {
            this->name = name;
        }
        else {
            cout << "the name you entered wrong \n";
        }
    }
    void set_pass(string pass) {
        if (Validation::check_pass(pass)) {
            this->pass = pass;
        }
        else {
            cout << "the password you entered wrong \n";
        }
    }

    //getters
    int get_id() { return id; }
    string get_name() { return name; }
    string get_pass() { return pass; }

    // displayInfo
    virtual void print() {
        cout << "ID: " << id << "\nName: " << name << endl;
    }
};
