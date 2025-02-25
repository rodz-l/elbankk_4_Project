//#include "Validation.h"
//#include "Person.h"
//#include "Client.h"
//#include "Employee.h"
//#include "Admin.h"
//#include "Parser.h"
//#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "FileManager.h"
int main() {

    Client c(123, "saidgaber", "asdlove123", 2000);
    Client c1(124, "alimohmed", "asdlove345", 3000);
    Client c2(125, "mohmedgaber", "asdlove789", 4000);
    c1.print();
    cout << endl;
    FilesHelper::saveClient(c);
    FilesHelper::saveClient(c1);
    FilesHelper::saveClient(c2);
    FileManager f1;
    //    f1.getAllClients();
    //string LastID = "E.LastID.txt";
    ////    Employee e(222, "saidgaber", "sadsdaew1", 20000);
    //Employee e1(223, "alimohmed", "sadsdaew12", 20022);
    //Employee e2(224, "mohmedgaber", "sadsdaew123", 20011);
    //Employee e3(225, "mohmedgaber", "sadsdaew1234", 20033);
    ////    FilesHelper::saveEmployee("Employee.txt", LastID, e);
    //FilesHelper::saveEmployee("Employee.txt", LastID, e1);
    //FilesHelper::saveEmployee("Employee.txt", LastID, e2);
    //FilesHelper::saveEmployee("Employee.txt", LastID, e3);
    ////    e.print();
    ////    f1.getAllEmployees();
    ////## client
    ////    Client c;
    ////    e.addclient(c);
    ////    FilesHelper::saveClient(c);

    ////    vector<Client>client ={c,c1,c2};
    ////    int id;
    ////    cin>>id;
    ////    cout<<e.searchclient(id, client);
    ////    for(int i=0;i<client.size();i++){
    ////        if(id== client[i].get_id()){
    ////        e.Editclient(124,"alaa ahmed","alaa4574587",4500,client[i]);
    ////        FilesHelper::saveClient(client[i]);
    ////        }
    ////    }

    ////    for(int i=0;i<client.size();i++){
    ////        e.Listclient(client[i]);
    ////    }
    ////##employee
    //Employee e;
    //Admin a;
    ////    a.addemployee(e);
    ////    FilesHelper::saveEmployee("Employee.txt", LastID, e);
    //vector<Employee>employee = { e,e1,e2 };
    //int id;
    //cin >> id;
    ////        a.searchemployee(id, employee);
    ////        for(int i=0;i<employee.size();i++){
    ////            if(id== employee[i].get_id()){
    ////                a.Editemployee(id,"alaa ahmed","alaa4574587",4500,employee[i]);
    ////                FilesHelper::saveEmployee("Employee.txt",LastID,employee[i]);
    ////            }
    ////        }
    ////
    //for (int i = 0; i < employee.size(); i++) {
    //    a.Listemployee(employee[i]);
    //}
}

