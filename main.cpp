// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// List

#include <iostream>
#include <list>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::list;

int average(list<int> marks) {
    // defining total variable
    float total = 0;

    // process
    for (list<int>::const_iterator elem = marks.begin();
            elem != marks.end();
            elem++) {
        total += *elem;
    }

    // return average
    return static_cast<int>(total/(marks.size()));
}

int main() {
    // main function for list

    // variables
    list<int> marks;
    string temp;

    // input
    while (temp != "-1") {
        cout << "Mark (as %): ";
        cin >> temp;
        marks.push_back(stoi(temp));
    }
    marks.pop_back();

    // calling function/process/output
    cout << "\nAverage is " << average(marks) << "%" << endl;

    // output finished
    cout << endl;
    cout << "Done." << endl;
    return 0;
}
