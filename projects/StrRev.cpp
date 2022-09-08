/*
Module 4, Project 2
This projects reverses a string using pointers
author: eggermarc@gmail.com

This code contains deprecated functions (pre C++11). The results aren't very pretty, but the main() is essentially the author's work.
*/

#include <iostream>
#include <cstring>

int depr() {
    char *ptr1, *ptr2; 
    int i, n;
    char phrase[] = "Hi, welcome to my homework";

    ptr1 = phrase;

    for (i = 0; i < strlen(phrase); i++) std::cout << *(ptr1+i);
    std::cout << std::endl;

    i = strlen(phrase);
    ptr2 = &phrase[i];
    n = 0;
    while (i > 0) {
        --i;
        ptr2[n] = ptr1[i];
        n++;
    }

    for (i = 0; i < strlen(phrase); i++) std::cout << ptr2[i];
    std::cout << "\nCompleted!" << std::endl;
    return 0;
}

//The approach the book takes is smarter. We advance pointers, not an index through pointers

int main() {
    char *pointer_1, *pointer_2;
    char phrase[] = "Hi, welcome to my homework!";
    int i;
    char temporary;

    for (i = 0; i < strlen(phrase); i++) std::cout << phrase[i];

    pointer_1 = phrase;
    pointer_2 = &phrase[strlen(phrase) - 1];

    while (pointer_2 > pointer_1) {
        temporary = *pointer_1;
        *pointer_1 = *pointer_2;
        *pointer_2 = temporary;
        pointer_1++; pointer_2--;
    }

    std::cout << "\nReversed: ";
    for (i = 0; i < strlen(phrase); i++) std::cout << pointer_1[i];

    std::cout << std::endl;

    return 0;
}