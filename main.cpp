#include <iostream>
#include <cstdlib>

#include "classes/Employee.h"
#include "classes/Company.h"


int main(){


    //Testing methods

    //Creating a company and some Employees
    Company c1("GitBulb", "123478154");
    Date d1(10,12,2017);
    Employee e1("Arnaldo Barbosa Eloi de Souza", 1050.00, d1);
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
    Date d2(05,02,2019);
    Employee e2("Ronaldo dos Santos Cazuza", 750.00, d2);
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
    Date d3(07,03,2019);
    Employee e3("Senhor Miagui", 600.00, d3);
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
    
    //Employing people on company GitBulb
    c1.employ(e1);
    c1.employ(e2);
    c1.employ(e3);
    

    //Creating a company and some Employees
    Company c2("Tindal Ships", "589124223");
    Date d4(10,12,2017);
    Employee e4("Magnaldo Cicilius da Costa", 10550.00, d4);
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
    Date d5(05,02,2019);
    Employee e5("Everton Corinao", 7500.00, d5);
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
    Date d6(07,03,2019);
    Employee e6("Renan Soares da Silva", 60000.00, d6);
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
   
    //Employing people on company Tindal Ships
    c2.employ(e4);
    c2.employ(e5);
    c2.employ(e6);

    //Trying to employ someone previously hired, should alert an error with cout
    c2.employ(e6);



    //Getting number of employees on GitBulb company
    std::cout<<c1.getNumberOfEmployees()<<std::endl;

    //Getting static number of Companies and Employees
    std::cout<<"Companies: "<<Company::N_COMPANIES<<std::endl;
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
    
    //Getting number of employees on GitBulb company
    std::cout<<c2.getNumberOfEmployees()<<std::endl;

    //Getting static number of Companies and Employees
    std::cout<<"Companies: "<<Company::N_COMPANIES<<std::endl;
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;

    //Show average of employees per company
    std::cout<<"Average employee per company: "<<Company::employeePerCompanyAvg()<<std::endl; 
    
    //Testing cout overload from GitBulb and Tindal Ships
    std::cout<<c1<<std::endl; 
    std::cout<<c2<<std::endl; 

    //Showing only people hired in the last 90 days
    c1.listNewPersonnel();
    
    return 0;
}