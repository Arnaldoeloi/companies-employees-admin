#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
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

        void getName();
        void setName(string name);

        void getSalary();
        void setSalary(float salary);
        
        friend ostream& operator<< (ostream &strteam, Employee& const employee);
        friend ostream& operator== (ostream &strteam, Employee& const employee);

        static int N_EMPLOYEES;
};



#endif