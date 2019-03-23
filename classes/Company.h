#ifndef _COMPANY_H_
#define _COMPANY_H_

#include<string>
#include<Employee.h>
#include<list>

class Company{
    private:
        string name;
        string CNPJ;
        list <Employee> employees;
    public:
        Company();
        ~Company();

        void employ();
        void fire();
        void raiseEveryoneSalaryBy();
        void listNewPersonnel();
        static void listEmployeeAveragePerCompany();
        

};

#endif