#include "Employee.h"

Employee::Employee(std::string name, float salary, Date& admissionDate){
    name_=name;
    salary_=salary;
    Date admissionDate_(admissionDate);
}

Employee::Employee(std::string name, float salary, std::string admissionDate){
    name_=name;
    salary_=salary;
    
    Date admissionDate_(std::stoi(admissionDate.substr(0,1), nullptr),std::stoi(admissionDate.substr(3,4), nullptr),std::stoi(admissionDate.substr(6,7), nullptr));
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
    stream<<"Salary: "<<employee.getSalary()<<std::endl;
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

