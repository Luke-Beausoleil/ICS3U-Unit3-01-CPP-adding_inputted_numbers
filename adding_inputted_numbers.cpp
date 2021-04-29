// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: April 2021
// This program adds together two numbers inputted by the user

#include <iostream>

int main() {
    // this function adds together the two inputted numbers

    // variables
    float firstNumber;
    float secondNumber;
    float answer;

    // input
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    // process
    answer = firstNumber + secondNumber;

    // output
    std::cout << "\n" << firstNumber << " + " << secondNumber << " = "
          << answer << std::endl;
    std::cout << "\nDone." << std::endl;
}
