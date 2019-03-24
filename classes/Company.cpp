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

void Company::employ(Employee& e){
    bool found=false; //identify if the employee is or not alrealdy an employee
    for(std::list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
        if(e == *ptr){
            found=true;
            break;
        }
    }
    if(!found){
        Employee::N_EMPLOYEES--; //To be counted as one, an Employee need to be hired first
        employees_.push_back(e);
        n_employees_++;
    }else{
        std::cout<<e.getName()<<" is already employed."<<std::endl;
    }
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
    time_t todayTime = time(NULL);
	tm* timePtr = localtime(&todayTime);

    Date now;

    now.set_year(timePtr->tm_year+1900); //it is necessary to sum up 1900 to get current date
    now.set_month(timePtr->tm_mon+1);    //tm_mon starts at 0, so to get the current month we sum 1, since we don't have a month 0 
    now.set_day(timePtr->tm_mday);       //tm_mday returns the day of the month

    std::cout<<now<<std::endl;
    std::cout<<now-90<<std::endl;
    
    // for(std::list<Employee>::iterator ptr = employees_.begin(); ptr != employees_.end(); ptr++){
    //     if(ptr->getAdmissionDate() > (now - 90)){
    //         std::cout<<*ptr<<std::endl;
    //     }
    // }
}

int Company::getNumberOfEmployees(){
    return n_employees_;
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
    stream<<"========||========||========"<<std::endl;
    stream<<"Employees:"<<std::endl<<std::endl;
    company.listAllEmployees();
    stream<<"====//====//===="<<std::endl<<std::endl;
    return stream;
}



