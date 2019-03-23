#include "Company.h"

int Company::N_COMPANIES=0;

Company::Company(std::string name, std::string cnpj){
    name_ = name;
    CNPJ_ = cnpj;

    n_employees_=0;

    Company::N_COMPANIES++;
};

Company::~Company(){
    Company::N_COMPANIES--;
};

void Company::employ(Employee e){
    employees_.push_back(e);
    n_employees_++;
};

void Company::fire(Employee e){
    for(std::list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
        if(e == *ptr){
            employees_.erase(ptr);
            n_employees_--;
            break;
        }
    }
};

void Company::raiseEveryoneSalaryBy(float percentage){
    for(std::list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
        ptr->setSalary(ptr->getSalary() * (percentage/100));
    }
}

void Company::listAllEmployees(){
    for(std::list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
        std::cout<<*ptr<<std::endl;
    }
}

void Company::listNewPersonnel(){
    for(std::list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
        if(ptr->getAdmissionDate()<ptr->getAdmissionDate()-90){
            std::cout<<*ptr<<std::endl;
        }
    }
}

int Company::getNumberOfEmployees(){
    return n_employees_;
}

int Company::countPersonnel(){
    return employees_.size();
}

std::string Company::getName(){
    return name_;
}

std::string Company::getCNPJ(){
    return CNPJ_;
}

std::list <Employee> Company::getEmployees(){
    return employees_;
} 

void Company::setName(std::string name){
    name_=name;
}

void Company::setCNPJ(std::string cnpj){
    CNPJ_=cnpj;
}


float Company::employeePerCompanyAvg(){
    return Employee::N_EMPLOYEES/Company::N_COMPANIES;
}


std::ostream & operator << (std::ostream &stream, Company& company){
    stream<<"Name: ";
    stream<<company.getName()<<std::endl;
    stream<<"CNPJ: ";
    stream<<company.getCNPJ()<<std::endl;
    stream<<"Number of employees: ";
    stream<<company.getNumberOfEmployees()<<std::endl;
    return stream;
}



