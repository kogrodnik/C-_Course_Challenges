#include "Mystring.hpp"

bool Mystring::operator == (const Mystring &other) {
    return myString_ == other.myString_;
}

bool Mystring::operator != (const Mystring &other) {
    return myString_ != other.myString_;
}

Mystring Mystring::operator = (const std::string &str) {
    myString_ = str;
    return *this;
}

bool Mystring::operator < (const Mystring &other) {
    return myString_ < other.myString_;
}

bool Mystring::operator > (const Mystring &other) {
    return myString_ > other.myString_;
}

Mystring &Mystring::operator - () {
    for(auto &el : this->myString_) {
        el = tolower(el);
    }
    return *this;
}

std::ostream &operator << (std::ostream &os, const Mystring &other) {
    os << other.myString_;
    return os;
}

Mystring Mystring::operator + (const std::string &other) {
    myString_ += other;
    return myString_;
}

Mystring &Mystring::operator += (const std::string &other) {
    *this = *this + other;
    return *this;
}

Mystring Mystring::operator * (int number) {
    Mystring newString {};
    for(int i {1}; i <= number; i++) {
        newString.myString_ += myString_;
    }
    return newString;
}

Mystring &Mystring::operator *= (int number) {
    *this = *this * number;
    return *this;
}

Mystring &Mystring::operator ++ () {
    for(auto &el : this->myString_) {
        el = toupper(el);
    }
    return *this;
}

Mystring Mystring::operator ++ (int) {
    Mystring str {*this};
    operator++();
    return str;
}