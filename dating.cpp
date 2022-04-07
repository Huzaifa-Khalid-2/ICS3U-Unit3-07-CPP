// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huzaifa Khalid
// Created on: April 2022
// This function asks a user if they are rich and handsome
// and depending on their answeres it tells if they can date
// the grandchild

#include <iostream>

int main() {
    // This function asks a user if they are rich and handsome
    // and depending on their answeres it tells if they can date
    // the grandchild

    std::string user_looks;
    std::string user_wealth;


    // input
    std::cout << "Are you rich?(yes or no): ";
    std::cin >> user_wealth;
    std::cout << "Are you handsome?(yes or no): ";
    std::cin >> user_looks;

    // process and output
    if (user_wealth == "yes" || user_looks == "yes") {
        std::cout << "\nYou can date the grandchild.";
    } else if (user_wealth == "no" && user_looks == "no") {
        std::cout << "\nYou can not date the grandchild.";
    } else {
        std::cout << "\nReally? (-_-)ゞ all you had to do was say yes or no.";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
