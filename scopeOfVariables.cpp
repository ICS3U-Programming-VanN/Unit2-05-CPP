// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: September 2020
// This program shows how local and global variables work

#include <iostream>

// Declared Global variable
int firstInteger = 25;

void localVariable() {
    // Declaring Local Variables
    int firstInteger = 15;
    int secondInteger = 20;
    int sumOfIntegers = firstInteger + secondInteger;

    // Displays the local variables added together
    std::cout << "(Local) firstInteger + secondInteger = sumOfIntegers: "
    << firstInteger << " + " << secondInteger
    << " = " << sumOfIntegers << std::endl;
}

void globalVariable() {
    // Uses Global Variable firstInteger
    firstInteger = firstInteger + 1;
    int secondInteger = 20;
    int sumOfIntegers = firstInteger + secondInteger;

    // Displays the addition of the local integer with the global integer
    std::cout <<
     "(Global) firstInteger + (Local) secondInteger, sumOfIntegers: "
    << firstInteger
    << " + " << secondInteger << " = " << sumOfIntegers << std::endl;
}

int main() {
    // Calls localVariable() and globalVariable() function
    localVariable();
    globalVariable();

    // Displays end of the program
    std::cout << "\nDone. " << std::endl;
}
