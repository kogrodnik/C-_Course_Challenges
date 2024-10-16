#include "Mystring.hpp"
#include <iostream>

int main() {
    
    std::cout << std::boolalpha << '\n';
    Mystring a {"frank"};
    Mystring b {"frank"};

    std::cout << (a==b) << '\n';
    std::cout << (a!=b) << '\n';
    
    b = "george";
    std::cout << (a==b) << '\n';
    std::cout << (a!=b) << '\n';
    std::cout << (a<b) << '\n';
    std::cout << (a>b) << '\n';
    
    Mystring s1 {"FRANK"};
    s1 = -s1;       
    std::cout << s1 << '\n';

    s1 = s1 + "*****";
    std::cout << s1 << '\n';
    
    s1 += "-----";
    std::cout << s1 << '\n';
    
    Mystring s2 {"12345"};
    s1 = s2 * 3;
    std::cout << s1 << '\n';
    
    Mystring s3 {"abcdef"};  
    s3 *= 5;
    std::cout << s3 << '\n';
    
    Mystring s {"Frank"};
    ++s;
    std::cout << s << '\n';
    
    s = -s; 
    std::cout << s << '\n';
    
    Mystring result;
    result = ++s;
    std::cout << s << '\n';
    std::cout << result << '\n';
    
    s = "Frank";
    s++;
    std::cout << s << '\n';
    
    s = -s;
    std::cout << s << '\n';
    result = s++;
    std::cout << s << '\n';
    std::cout << result << '\n';
    
    return 0;
}