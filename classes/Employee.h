#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include<iostream>
#include"Date.h"

class Employee{

    private: 
        string name_;
        float salary_;
        Date admissionDate_;

    public:
        Employee(string name, float salary, Date admissionDate);
        Employee(const Employee& e);

        ~Employee();

        string getName();
        void setName(string name);

        float getSalary();
        Date getAdmissionDate();
        
        void setAdmissionDate(Date& date);
        void setSalary(float salary);

        friend ostream & operator << (ostream &stream, Employee& const employee);
        bool operator == (Employee& const employee);

        static int N_EMPLOYEES;
};



#endif