#ifndef _COMPANY_H_
#define _COMPANY_H_

#include<iostream>
#include<string>
#include<Employee.h>
#include<list>
#include<algorithm>

class Company{

    private:
        string name_;
        string CNPJ_;
        list <Employee> employees_;

        int n_employees_;
        int list_iterator;
    public:
        Company(string name, string cnpj);
        ~Company();

        static int N_COMPANIES;

        void employ(Employee& e);
        void fire(Employee& e);
        void raiseEveryoneSalaryBy(float percentage);
        void listAllEmployees();
        void listNewPersonnel();
        int countPersonnel();

        string getName();
        string getCNPJ();
        int getNumberOfEmployees();
        list <Employee> getEmployees(); //return Employees list object

        void setName(string name);
        void setCNPJ(string cnpj);

        static float employeePerCompanyAvg();

        friend ostream & operator << (ostream &stream, Company& const company);

};

#endif