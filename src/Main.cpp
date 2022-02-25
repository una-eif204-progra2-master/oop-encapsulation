// www.mike.education
// Copyright (c) 2022.

//
// Created by Maikol Guzman Alan on 2/24/22.
//
#include "Dog.h"
#include <iostream>
using namespace std;

/**
 * Main class to represent the inheritance
 * @return 0
 */
int main() {
    cout << "Welcome to the mike.education!" << endl;  // display message
    cout << "Encapsulation\n" << endl;  // display message

    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Calling member of the derived class
    dog1.bark();
    dog1.setType("mammal");

    // Using getColor() of dog1 as argument
    // getColor() returns string data
    dog1.displayInfo(dog1.getColor());

    return 0;
}
