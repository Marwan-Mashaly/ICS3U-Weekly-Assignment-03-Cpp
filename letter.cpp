// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program tells user if the letter is a constant or a vowel

#include <iostream>

int main() {
    // this function tells user if the letter is a constant or a vowel

    char letter;

    // input
    std::cout << "Enter a letter to check: ";
    std::cin >> letter;
    std::cout << "" << std::endl;



    switch (letter) {
        case 'a' :
            std::cout << "it's a Vowel " << std::endl;
            break;
        case 'b' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'c' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'd' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'e' :
            std::cout << "it's a Vowel  " << std::endl;
            break;
        case 'f' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'g' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'h' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'i' :
            std::cout << "it's a Vowel " << std::endl;
            break;
        case 'j' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'k' :
            std::cout << "it's a Constant" << std::endl;
            break;
        case 'l' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'm' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'n' :
            std::cout << "it's a Constant" << std::endl;
            break;
        case 'o' :
            std::cout << "it's a Vowel " << std::endl;
            break;
        case 'p' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'q' :
            std::cout << "it's a Constant  " << std::endl;
            break;
        case 'r' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 's' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 't' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'u' :
            std::cout << "it's a Vowel " << std::endl;
            break;
        case 'v' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'w' :
            std::cout << "it's a Constant" << std::endl;
            break;
        case 'x' :
            std::cout << "it's a Constant " << std::endl;
            break;
        case 'y' :
            std::cout << "it's sometimes a Vowel sometimes a Constant "
            << std::endl;
            break;
        case 'z' :
            std::cout << "it's a Constant " << std::endl;
            break;

        default :
            std::cout << "Invalid month" << std::endl;
    }
}
