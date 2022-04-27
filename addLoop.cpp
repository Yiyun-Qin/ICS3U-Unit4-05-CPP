// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, adding numbers input by the user

#include <iostream>
#include <string>

int main() {
    // This function adds numbers from the user
    std::string addTimeString;
    std::string addNumberString;
    int addTimeInteger;
    int addNumberInteger;
    int answer = 0;

    // input
    std::cout << "How many numbers are you going to add: ";
    std::cin >> addTimeString;

    // process
    std::cout << "" << std::endl;
    try {
        addTimeInteger = std::stoi(addTimeString);
        if (addTimeInteger <= 0) {
            std::cout << "Please put in a positive integer.";
        } else {
            for (int loopCounter = 0;
            loopCounter < addTimeInteger; loopCounter++) {
                std::cout << "Enter a number to add: ";
                std::cin >> addNumberString;
                try {
                    addNumberInteger = std::stoi(addNumberString);
                    if (addNumberInteger >= 0) {
                        answer = answer + addNumberInteger;
                    } else {
                        answer = answer + 0;
                    }
                    if (loopCounter < addTimeInteger - 1) {
                        continue;
                    } else {
                        std::cout << "The sum of just the positive numbers is "
                        << answer << ".";
                    }
                } catch (std::invalid_argument) {
                    std::cout << "Invalid number!\n";
                }
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!";
    }
    std::cout << "\n\nDone." << std::endl;
}
