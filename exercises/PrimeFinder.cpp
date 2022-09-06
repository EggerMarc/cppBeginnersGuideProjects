#include <iostream>

//Module 2, Exercise 14
//This program identifies all the primes in a range
//author: eggermarc@gmail.com

int main() {
    int upper_range = 100;
    int lower_range = 1;

    for (int n = lower_range; n <= upper_range; n++){
        
        if ((n == 1) || (n == 2)) std::cout << "\nPrime found: " << n;
        if (n > 2) {
            bool flag = false;
            for (int  m = lower_range; m < n; m++) {
                if (!(n % m) && m > 1) {
                    flag = true;
                }
            }
            if (!flag) std::cout << "\nPrime found: " << n;
        }
    }

    std::cout << "\nApplication completed" << std::endl;

    return 0;
}