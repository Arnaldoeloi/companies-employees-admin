#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>
#include"Date.h"

class Employee{
    public:
        static int N_EMPLOYEES;

    private: 
        std::string name_;
        float salary_;
        Date admissionDate_;

    public:

        Employee(std::string name, float salary, Date& admissionDate);
        Employee(std::string name, float salary, std::string admissionDate);
        
        Employee(const Employee& e);

        ~Employee();

        std::string getName();
        void setName(std::string name);

        float getSalary();
        Date getAdmissionDate();
        
        void setAdmissionDate(Date& date);
        void setSalary(float salary);

        friend std::ostream & operator << (std::ostream &stream, Employee& employee);
        bool operator == (Employee& employee);

};



#endif