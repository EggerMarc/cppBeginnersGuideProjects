/*
Module 4, Project 1
Contains an implementation of the quicksort and bubble sort algorithms
author: eggermarc@gmail.com
*/

#include <iostream>
#include <cstdlib>

int main() {
    int length, i, n, value, intermediate; char user_input; bool sorted_flag;

    std::cout << "Input array length: ";
    std::cin >> length;

    int array[length], sorted[length];

    for (i = 0; i < length; i++ ) {
        value = rand() % 100;
        sorted[i] = value;
        array[i] = value;
    }//This generates a value from 0 - 99

    std::cout << "\nPrint array? [Y/N]";
    std::cin >> user_input;
    if (user_input == 'Y' || user_input == 'y') {
        std::cout << "\n";
        for (i = 0; i < length; i++) std::cout << array[i] << " ";
    }

    //Bubblesort begins here
    std::cout << "\n";
    sorted_flag = false;
    while (sorted_flag == false){
        sorted_flag  = true; //if no swaps are made, we are done
        for (i = 0; i < length; ++i) {
            if (sorted[i] > sorted[i + 1] && i < length - 1){
                intermediate  = sorted[i];
                sorted[i] = sorted[i + 1];
                sorted[i + 1] = intermediate;
                //std::swap(sorted[i], sorted[i+1]); if we wish to use the std library
                sorted_flag = false;
            }
        }
    }

    if (user_input == 'Y' || user_input == 'y') {
        std::cout << "\n";
        for (i = 0; i < length; i++) std::cout << sorted[i] << " ";
    }

    return 0;
}
