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

        //Constructor passing a date as argument
        Employee(std::string name, float salary, Date& admissionDate);
        
        //Constructor passing a string in date format (dd/mm/YYYY) as argument
        Employee(std::string name, float salary, std::string admissionDate);
        
        //Copy constructor
        Employee(const Employee& e);

        //Deconstructor
        ~Employee();

        //Get name from Employee
        std::string getName();

        //Set name for Employee
        void setName(std::string name);

        //Get salary from Employee
        float getSalary();

        //Get admission date from Employee
        Date getAdmissionDate();
        
        //Set admission date for Employee
        void setAdmissionDate(Date& date);

        //Set salary for Employee
        void setSalary(float salary);

        //Cout operator overload
        friend std::ostream & operator << (std::ostream &stream, Employee& employee);
        
        //Equals to employee operator overload
        bool operator == (Employee& employee);

};



#endif