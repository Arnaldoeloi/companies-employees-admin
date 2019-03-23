#include <iostream>
#include <cstdlib>

#include "classes/Employee.h"
#include "classes/Company.h"


int N_EMPLOYEES=0;
int N_COMPANIES=0;

int main(){

    Company c("GitHub", "123478154");

    Date d1(10,12,2017);
    Employee e1("Arnaldo Barbosa Eloi de Souza", 1050.00, d1);
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
    
    Date d2(05,02,2019);
    Employee e2("Ronaldo dos Santos Cazuza", 750.00, d2);
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
    
    Date d3(07,03,2019);
    Employee e3("Senhor Miagui", 600.00, d3);
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;
    
    c.employ(e1);
    c.employ(e2);
    c.employ(e3);

    std::cout<<c.countPersonnel()<<std::endl;
    std::cout<<"Companies: "<<Company::N_COMPANIES<<std::endl;
    std::cout<<"Employees: "<<Employee::N_EMPLOYEES<<std::endl;

    return 0;
}