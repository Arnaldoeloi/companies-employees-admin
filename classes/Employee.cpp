#include "Employee.h"

Employee::Employee(string name, float salary, Date admissionDate){
    name_=name;
    salary_=salary;
    Date admissionDate_(admissionDate);
}

Employee::Employee(const Employee::Employee& e){

}

Employee::~Employee(){
    N_EMPLOYEES--;
}

string Employee::getName(){
    return name_;
}
void Employee::setName(string name){
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

ostream & operator << (ostream &stream, Employee& const employee){
    stream<<"Name: "<<employee.getName()<<endl;
    stream<<"Salary: "<<employee.getSalary()<<endl;
    stream<<"Admission Date: "<<employee.getAdmissionDate()<<endl;
}

bool Employee::operator == (Employee& const employee){
    /*
    Using only the name to validate is the correct way to approach 
    the problem, because salary and admissionDate could change in the same Employee.
    */
    if(employee.getName()==this->getName()) return true;
    return false; 
}

