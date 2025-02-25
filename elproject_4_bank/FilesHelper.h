#pragma once
#include "Parser.h"

class FilesHelper {
public:
    static void saveLast(string& fileName, int id) {
        ofstream file(fileName);
        if (file.is_open()) {
            file << id;
            file.close();
            cout << "Saved last ID: " << id << " to " << fileName << endl;
        }
        else {
            cout << "Failed to open " << fileName << " for writing." << endl;
        }
    }

    static int getLast(string& fileName) {
        ifstream file(fileName);
        int id = 0;
        if (file.is_open()) {
            file >> id;
            file.close();
            cout << "Retrieved last ID: " << id << " from " << fileName << endl;
        }
        else {
            cout << "Failed to open " << fileName << " for reading." << endl;
        }
        return id;
    }

    static void saveClient(Client& c) {
        ofstream file("Clients.txt", ios::app);
        if (file.is_open()) {
            file << c.get_id() << "/" << c.get_name() << "/" << c.get_pass() << "/" << c.getBalance() << "\n";
            file.close();
            cout << "Saved client: " << c.get_name() << " to Clients.txt" << endl;
        }
        else {
            cout << "Failed to open Clients.txt for writing." << endl;
        }
    }

    static void saveEmployee(const string& fileName, string& lastIdFile, Employee e) {
        ofstream file(fileName, ios::app);
        if (file.is_open()) {
            file << e.get_id() << "/" << e.get_name() << "/" << e.get_pass() << "/" << e.getSalary() << "\n";
            file.close();
            cout << "Saved employee: " << e.get_name() << " to " << fileName << endl;

            saveLast(lastIdFile, e.get_id());
        }
        else {
            cout << "Failed to open " << fileName << " for writing." << endl;
        }
    }







    static void GetClients() {
        fstream file;
        if (!file) {
            cout << "Error: Unable to open Clients.txt\n";
            return;
        }



        vector<string> c;
        string s;
        file.open("Clients.txt", ios::in);
        while (getline(file, s)) {
            c.push_back(s);
        }
        file.close();
        vector<Client> client;
        for (int i = 0; i < c.size(); i++) {
            client.push_back(Parser::parseToClient(c[i]));
        }
        for (int i = 0; i < client.size(); i++) {
            cout << "the details for client number" << i + 1 << endl;
            cout << "id :" << client[i].get_id() << endl;
            cout << "name :" << client[i].get_name() << endl;
            cout << "password :" << client[i].get_pass() << endl;
            cout << "balance :" << client[i].getBalance() << endl;
        }
    }
    static void GetEmployees() {
        fstream file;
        if (!file) {
            cout << "Error: Unable to open Employee.txt\n";
            return;
        }


        string s;
        vector<string> e;
        file.open("Employee.txt", ios::in);
        while (getline(file, s)) {
            e.push_back(s);
        }
        file.close();
        vector<Employee> employee;
        for (int i = 0; i < e.size(); i++) {
            employee.push_back(Parser::parseToEmployee(e[i]));
        }
        for (int i = 0; i < employee.size(); i++) {
            cout << "the details for employee number" << i + 1 << endl;
            cout << "id :" << employee[i].get_id() << endl;
            cout << "name :" << employee[i].get_name() << endl;
            cout << "password :" << employee[i].get_pass() << endl;
            cout << "salary :" << employee[i].getSalary() << endl;
        }
    }
    static void GetAdmin() {
        fstream file;
        if (!file) {
            cout << "Error: Unable to open Admin.txt\n";
            return;
        }


        vector<string> a;
        string s;
        file.open("Admin.txt", ios::in);
        while (getline(file, s)) {
            a.push_back(s);
        }
        file.close();
        vector<Admin> admin;
        for (int i = 0; i < a.size(); i++) {
            admin.push_back(Parser::parseToAdmin(a[i]));
        }
        for (int i = 0; i < admin.size(); i++) {
            cout << "the details for admin number" << i + 1 << endl;
            cout << "id :" << admin[i].get_id() << endl;
            cout << "name :" << admin[i].get_name() << endl;
            cout << "password :" << admin[i].get_pass() << endl;
            cout << "salary :" << admin[i].getSalary() << endl;
        }
    }
    static void clearFile(const string& fileName, const string& lastId) {
        ofstream file(fileName, ios::trunc);
        ofstream lastFile(lastId, ios::trunc);
        if (file && lastFile) {
            cout << "Cleared data in " << fileName << " and reset " << lastId << endl;
        }
        else {
            cout << "Error clearing files.\n";
        }
    }
};