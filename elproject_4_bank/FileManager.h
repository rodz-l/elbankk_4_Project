#pragma once
#include "DataSourceInterface.h"
#include "Parser.h"
#include "FilesHelper.h"
class FileManager :public DataSourceInterface
{
public:
    void addClient(Client& c) {
        FilesHelper::saveClient(c);
    }
    void addEmployee(string& fileName, string& lastIdFile, Employee& e) {
        FilesHelper::saveEmployee(fileName, lastIdFile, e);
    }
    void getAllClients() {
        FilesHelper::GetClients();
    }
    void getAllEmployees() {
        FilesHelper::GetEmployees();
    }
    void getAllAdmins() {
        FilesHelper::GetAdmin();
    }
    void removeAllClients(string FileName, string LastId) {
        fstream file;
        file.open(FileName, ios::out);
        file.close();
        file.open(LastId, ios::out);
        file.close();
    }
    void removeAllEmployees(string FileName, string LastId) {
        fstream file;
        file.open(FileName, ios::out);
        file.close();
        file.open(LastId, ios::out);
        file.close();
    }
    void removeAllAdmins(string FileName, string LastId) {
        fstream file;
        file.open(FileName, ios::out);
        file.close();
        file.open(LastId, ios::out);
        file.close();

    }


};