#include <iostream>

//This project makes a table of 1 to 100 feet, each of them converted to meters
//Author: eggermarc@gmail.com

int main() {
    double ratio = 3.28; // I think
    int counter = 0;
    int start_index, end_index, threshold;
    char userInput;

    std::cout << "User input limits and counter? [Y/N]: ";
    std::cin >> userInput;

    if (userInput == 'Y') {
        std::cout << "\nInput starting index: ";
        std::cin >> start_index;

        std::cout << "\nInput ending index: ";
        std::cin >> end_index;

        std::cout << "\nInput threshold: ";
        std::cin >> threshold;
    } else {
        start_index = 1;
        end_index = 100;
        threshold = 10;
    }

    for (int n = start_index; n <= end_index; n++) {
        counter++;
        double feet, meters;
        feet = double(n);

        meters = feet / ratio;
        std::cout << feet << " feet " << " are this in terms of meters: " << meters << std::endl;
        if (counter == threshold) {
            std::cout << "\n";
            counter = 0;
        }
    }

    return 0;
}