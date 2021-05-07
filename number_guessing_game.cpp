// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 07 May 2021
// This program allows the user to guess the correct number

#include <iostream>
#include <string>
#include <random>

int main() {
    // this function allows the user to guess the correct number

    // variable declarations
    int randomNumber;
    std::string userGuess;
    int userGuessInt;

    // random number generator
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // input
    std::cout << "Enter a number between 0 - 9: ";
    std::cin >> userGuess;

    // process
    try {
        userGuessInt = std::stoi(userGuess);

        if (userGuessInt == randomNumber) {
            // output
            std::cout << "You guessed right! The number was " << randomNumber;

        } else {
            // output
            std::cout << "Incorrect, the number was " << randomNumber;}
    } catch (std::invalid_argument) {
        std::cout << userGuess << " is not a number! Try again." << std::endl;}

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Thanks for playing!" << std::endl;
}
