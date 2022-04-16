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

    std::string userLooks;
    std::string userWealth;

    // input
    std::cout << "Are you rich?(yes or no): ";
    std::cin >> userWealth;
    std::cout << "Are you handsome?(yes or no): ";
    std::cin >> userLooks;

    // process and output
    if (userWealth == "yes" || userLooks == "yes") {
        std::cout << "\nYou can date the grandchild.";
    } else if (userWealth == "no" && userLooks == "no") {
        std::cout << "\nYou can not date the grandchild.";
    } else {
        std::cout << "\nReally? (-_-)ゞ all you had to do was say yes or no.";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
