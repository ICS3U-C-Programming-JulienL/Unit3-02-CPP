// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: October 13, 2023
// This program is a number guessing for whole number between 1 and 10

#include <iostream>

int main() {
    // declare variables and constants
    int userGuess;
    const int CORRECT_GUESS = 2;

    // get the user guess
    std ::cout << "An integer has been chosen from 0 to 9." << std::endl;
    std::cout << "What do you think the correct integer is: ";
    std::cin >> userGuess;

    // if the user gets the number right, tell them they were right
    if (userGuess == CORRECT_GUESS) {
        std ::cout << "Your guess was right!" << std::endl;
    }

    // if the user gets the number wrong, tell them they were wrong
    if (userGuess != CORRECT_GUESS) {
        std ::cout << "Your guess was wrong!" << std::endl;
    }
}
