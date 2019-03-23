#ifndef _COMPANY_H_
#define _COMPANY_H_

#include<iostream>
#include<string>
#include<Employee.h>
#include<list>

class Company{
    private:
        string name_;
        string CNPJ_;
        list <Employee> employees_;
    public:
        Company(string name, string CNPJ);
        ~Company();

        void employ(Employee e);
        void fire(Employee e);
        void raiseEveryoneSalaryBy(float percentage);
        void listNewPersonnel();
        void countPersonnel();

        static void listEmployeeAveragePerCompany();
        static int N_COMPANIES;

        friend ostream& operator<< (ostream &strteam, Company& const company);


       

};

#endif