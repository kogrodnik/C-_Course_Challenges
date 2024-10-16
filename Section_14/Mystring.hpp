#pragma once
#include <string>

class Mystring{
    private:
    std::string myString_ {};

    public: 
    Mystring() {}
    Mystring(std::string str) : myString_(str) {}

    bool operator == (const Mystring &other);
    bool operator != (const Mystring &other);
    Mystring operator = (const std::string &str);
    bool operator < (const Mystring &other);
    bool operator > (const Mystring &other);
    Mystring &operator - ();
    Mystring operator + (const std::string &other);
    Mystring &operator += (const std::string &other);
    Mystring operator * (int number);
    Mystring &operator *= (int number);
    Mystring &operator ++ ();
    Mystring operator ++ (int);

    friend std::ostream &operator << (std::ostream &os, const Mystring &other);
};