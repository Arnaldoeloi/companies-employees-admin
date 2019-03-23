#include "Employee.h"

int Employee::N_EMPLOYEES=0;

Employee::Employee(std::string name, float salary, Date& admissionDate){
    name_=name;
    salary_=salary;

    admissionDate_.set_year(admissionDate.year());
    admissionDate_.set_month(admissionDate.month());
    admissionDate_.set_day(admissionDate.day());
}

Employee::Employee(std::string name, float salary, std::string admissionDate){
    name_=name;
    salary_=salary;
    std::cout<<std::stoi(admissionDate.substr(0,2))<<std::endl<<std::stoi(admissionDate.substr(3,2))<<std::endl<<std::stoi(admissionDate.substr(6,4))<<std::endl<<std::endl;
    Date admissionDate_(std::stoi(admissionDate.substr(0,2)), std::stoi(admissionDate.substr(3,2)),std::stoi(admissionDate.substr(6,4)));

}

Employee::Employee(const Employee& e){
    name_= e.name_;
    salary_=e.salary_;
    admissionDate_=e.admissionDate_;
}

Employee::~Employee(){
    N_EMPLOYEES--;
}

std::string Employee::getName(){
    return name_;
}
void Employee::setName(std::string name){
    name_=name;
}

float Employee::getSalary(){
    return salary_;
}

Date Employee::getAdmissionDate(){
    return admissionDate_;
}

void Employee::setAdmissionDate(Date& date){
    admissionDate_ = Date(date);
}

void Employee::setSalary(float salary){
    salary_=salary;
}

std::ostream & operator << (std::ostream &stream, Employee& employee){
    stream<<"Name: "<<employee.getName()<<std::endl;
    stream<<"Salary: R$ "<<employee.getSalary()<<std::endl;
    stream<<"Admission Date: "<<employee.getAdmissionDate()<<std::endl;
    return stream;
}

bool Employee::operator == (Employee& employee){
    /*
    Using only the name to validate is the correct way to approach 
    the problem, because salary and admissionDate could change in the same Employee.
    */
    if(employee.getName()==name_) return true;
    return false; 
}

