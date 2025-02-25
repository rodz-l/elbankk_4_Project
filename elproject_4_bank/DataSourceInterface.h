#pragma once
#include "Client.h"
#include "Employee.h"
class DataSourceInterface
{
public:
    virtual void addClient(Client& c) = 0;
    virtual void addEmployee(string& fileName, string& lastIdFile, Employee& e) = 0;
    /* virtual void addAdmin(Admin* a) = 0;*/
    virtual void getAllClients() = 0;
    virtual void getAllEmployees() = 0;
    virtual void getAllAdmins() = 0;
    virtual void removeAllClients(string FileName, string LastId) = 0;
    virtual void removeAllEmployees(string FileName, string LastId) = 0;
    virtual void removeAllAdmins(string FileName, string LastId) = 0;


};
