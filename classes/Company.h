#ifndef _COMPANY_H_
#define _COMPANY_H_

#include<iostream>
#include<string>
#include"Employee.h"
#include<list>
#include<algorithm>

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


        void employ(Employee e);
        void fire(Employee e);
        void raiseEveryoneSalaryBy(float percentage);
        void listAllEmployees();
        void listNewPersonnel();
        int countPersonnel();

        std::string getName();
        std::string getCNPJ();
        int getNumberOfEmployees();
        std::list <Employee> getEmployees(); //return Employees list object

        void setName(std::string name);
        void setCNPJ(std::string cnpj);

        static float employeePerCompanyAvg();

        friend std::ostream & operator << (std::ostream &stream, Company& company);

};

#endif