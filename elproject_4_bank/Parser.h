#pragma once
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include <vector>
#include <sstream>
#include <fstream>
#include <stdexcept>

using namespace std;

class Parser {
public:
    static vector<string> split(const string& line, char delimiter = '/') {
        vector<string> parts;
        stringstream ss(line);
        string part;
        while (getline(ss, part, delimiter)) {
            parts.push_back(part);
        }
        return parts;
    }

    static Client parseToClient(const string& line) {
        vector<string> parts = split(line);
        if (parts.size() != 4) {
            throw invalid_argument("Invalid client line format.");
        }
        int id = stoi(parts[0]);
        string name = parts[1];
        string password = parts[2];
        double balance = stod(parts[3]);
        return Client(id, name, password, balance);
    }

    static Employee parseToEmployee(const string& line) {
        vector<string> parts_E = split(line);
        if (parts_E.size() != 4) {
            throw invalid_argument("Invalid employee line format.");
        }
        int id = stoi(parts_E[0]);
        string name = parts_E[1];
        string password = parts_E[2];
        double salary = stod(parts_E[3]);
        return Employee(id, name, password, salary);
    }

    static Admin parseToAdmin(const string& line) {
        vector<string> parts_A = split(line);
        if (parts_A.size() != 4) {
            throw invalid_argument("Invalid admin line format.");
        }
        int id = stoi(parts_A[0]);
        string name = parts_A[1];
        string password = parts_A[2];
        double salary = stod(parts_A[3]);
        return Admin(id, name, password, salary);
    }
};