#include <iostream>
#include <cmath> //for pow() function

//Module 2, Project 3
//This project that computes regular payments on a loan
//author: eggermarc@gmail.com

double calculator(double _principal, double _interest_rate, double _payment_frequency, double _years){
    double _payment = (_interest_rate * (_principal / _payment_frequency)) / (1 - pow( (_interest_rate / _payment_frequency) + 1. , -(_payment_frequency * _years)) );
    return _payment;
}


int main() {
    double principal, interest_rate, payment_frequency, years;

    std::cout << "\nInput the principal: ";
    std::cin >> principal;
    
    std::cout << "\nInput the interest rate: ";
    std::cin >> interest_rate;

    std::cout << "\nInput the payment frequency: ";
    std::cin >> payment_frequency;
    
    std::cout << "\nInput the years to be paid: ";
    std::cin >> years;

    std::cout << "\nPayment is " << calculator(principal, interest_rate, payment_frequency, years) << std::endl;
    return 0;
}

