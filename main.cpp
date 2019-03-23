#include <iostream>
#include <cstdlib>

#include "classes/Employee.h"
#include "classes/Company.h"


int N_EMPLOYEES=0;
int N_COMPANIES=0;

int main(){
    Date d(10,12,2017);
    d.valid();
    Employee e1("Arnaldo Barbosa Eloi de Souza", 1050.00, d);
    std::cout<<e1;

    return 0;
}