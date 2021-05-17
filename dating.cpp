// Copyright (c) 2021 Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Created on: May 17, 2021
// This program asks the user to input their age
// and displays whether they are eligible to date
// some grandparents' grandchild.

#include <iostream>
#include <string>

int main() {
    // decalre variable
    int userAgeAsInt;
    std::string userAgeAsString;

    // get the user's age
    std::cout << "Enter your age: ";
    std::cin >> userAgeAsString;

    try {
        userAgeAsInt = std::stoi(userAgeAsString);

        // display whether they are eligible to date or not
        if (userAgeAsInt > 25 && userAgeAsInt < 40) {
            std::cout << "You are allowed to date our grandchild.\n";
        } else if (userAgeAsInt > 40) {
            std::cout << "You are too old for our grandchild.\n";
        } else if (userAgeAsInt < 0) {
            std::cout << "Age cannot be a negative number.\n";
        } else {
            std::cout << "You are too young for our grandchild.\n";
        }
    }  // error message if input is not a number
    catch (std::invalid_argument)  {
        std::cout << userAgeAsString << " is not a valid number.\n";
    }
}
