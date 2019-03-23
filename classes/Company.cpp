#include "Company.h"

Company::Company(std::string name, std::string cnpj){
    name_ = name;
    CNPJ_ = cnpj;

    n_employees_=0;

    N_COMPANIES++;
};

Company::~Company(){
    N_COMPANIES--;
};

void Company::employ(Employee& e){
    employees_.push_back(e);
    n_employees_++;
};

void Company::fire(Employee& e){
    for(list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
        if(e == *ptr){
            employees_.erase(ptr);
            n_employees_--;
            break;
        }
    }
};

void Company::raiseEveryoneSalaryBy(float percentage){
    for(list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
        ptr->setSalary(ptr->getSalary * (percentage/100));
    }
}

void Company::listAllEmployees(){
    for(list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
        std::cout<<*ptr<<endl;
    }
}

void Company::listNewPersonnel(){
    for(list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
        if(ptr->getAdmissionDate()<ptr->getAdmissionDate()-90){
            std::cout<<*ptr<<endl;
        }
    }
}

int Company::getNumberOfEmployees(){
    return n_employees_;
}

int Company::countPersonnel(){
    return employees_.size;
}

string Company::getName(){
    return name_;
}

string Company::getCNPJ(){
    return CNPJ_;
}

list <Employee> Company::getEmployees(){
    return employees_;
} 

void Company::setName(string name){
    name_=name;
}

void Company::setCNPJ(string cnpj){
    CNPJ_=cnpj;
}


float Company::employeePerCompanyAvg(){
    return Employee::N_EMPLOYEES/N_COMPANIES;
}


ostream & operator << (ostream &stream, Company& const company){
    stream<<"Name: ";
    stream<<company.getName()<<endl;
    stream<<"CNPJ: ";
    stream<<company.getCNPJ()<<endl;
    stream<<"Number of employees: ";
    stream<<company.getNumberOfEmployees()<<endl;
}



