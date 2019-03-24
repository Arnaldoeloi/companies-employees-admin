#ifndef _COMPANY_H_
#define _COMPANY_H_

#include<iostream>
#include<string>
#include<list>
#include<algorithm>
#include"Date.h"
#include"Employee.h"

class Company{

    private:
        std::string name_;
        std::string CNPJ_;
        std::list <Employee> employees_;

        int n_employees_;
        int list_iterator;
    public:
        static int N_COMPANIES;
        
        Company(std::string name, std::string cnpj);
        ~Company();

        //Hire an employee and raise N_EMPLOYEES by one
        void employ(Employee& e);

        //Fire an employee and subtract one from N_EMPLOYEES
        void fire(Employee e);

        //Iterate through and raise the salary of everyone in the company
        void raiseEveryoneSalaryBy(float percentage);

        //List all employees from the employees_ member list
        void listAllEmployees();

        //List only those hired in the last 90 days
        void listNewPersonnel();

        //Count the amount of employees in the company (local) 
        int getNumberOfEmployees();

        //return the value of member name_
        std::string getName();

        //return the value of member CNPJ_
        std::string getCNPJ();

        //return the list of member employees_
        std::list <Employee> getEmployees(); //return Employees list object

        //set the value of member name_
        void setName(std::string name);
        
        //set the value of member cnpj_
        void setCNPJ(std::string cnpj);

        //Count the amount of employees in the company (local)  
        static float employeePerCompanyAvg();

        //Overload inserction (<<) into stream to print all employees and Company data  
        friend std::ostream & operator << (std::ostream &stream, Company& company);

};

#endif