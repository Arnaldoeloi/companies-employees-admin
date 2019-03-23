// File: Date.h
// author: Bernt A Oedegaard.
#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Date{
    protected:
        int year_;
        int month_;
        int day_;
    public:
        Date();
        Date(const int& d, const int& m, const int& y);

        bool valid(void) const;

        int day() const;
        int month() const;
        int year() const;

        void set_day(const int& day);
        void set_month(const int& month);
        void set_year(const int& year);

        Date operator ++();
        Date operator ++(int);
        Date operator --();
        Date operator --(int);
};

bool operator == (const Date&, const Date&);
bool operator != (const Date&, const Date&);
bool operator < (const Date&, const Date&);
bool operator > (const Date&, const Date&);
bool operator <=(const Date&, const Date&);
bool operator >=(const Date&, const Date&);

ostream& operator << (ostream& os, const Date& d);

#endif