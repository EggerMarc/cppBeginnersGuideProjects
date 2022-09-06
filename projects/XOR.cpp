#include <iostream>

//Module 2, Project 2
//This projects creates an exclusive OR operator
//Author: eggermarc@gmail.com

bool XOR(bool value_1, bool value_2) {

    bool result = false;

    if ((value_1 || value_2) && (!(value_1) || !(value_2))) {
        result = true;
    }

    return result;
}

int main() {
    
    bool a, b;

    a = b = true;
    //Truth table
    std::cout << "a & b true: " << XOR(a, b);
    b = false;
    std::cout << "\na true & b false: " << XOR(a, b);
    b = true;
    a = false;
    std::cout << "\na false & b true: " << XOR(a, b);
    b = false;
    std::cout << "\na false & b false: " << XOR(a, b) << std::endl;

    return 0;
}