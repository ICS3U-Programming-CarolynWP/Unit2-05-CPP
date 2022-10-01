// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: Sep 2020
// Displays a bunch of variables and assignment statements

#include <iostream>

int main() {
    // variables
    int classes = 4;
    std::string niceMessage;
    std::string words = "You ";
    std::string words2 = "are ";
    std::string words3 = "cool!";
    // assignment statements
    classes = classes + 4;
    niceMessage = words + words2 + words3;

    // printing out those statements
    std::cout << "There are " << classes << " classes in a semester\n";
    std::cout << niceMessage;
}
