#ifndef DATE_H
#define DATE_H

#include<string>
#include"Date.h"
#include<ctime>

/*
TODO:

1: given two dates, get days between both;

2: being able to sum up number x of days to a date and get another date (overload c++ + operator)

3: being able to subtract a number x of days to a date and get another date (overload c++ - operator)


*/

Class Date{
    private: 
        time_t date
    public: 
        Date();
        ~Date();
    
}




#endif