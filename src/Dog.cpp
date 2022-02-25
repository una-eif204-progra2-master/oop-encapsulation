//
// Created by Maikol Guzman Alan on 2/24/22.
//

#include "Dog.h"
#include <iostream>
using namespace std;

void Dog::bark() {
    cout << "I can bark! Woof woof!!" << endl;
}

void Dog::displayInfo(string _text) {
    cout << "I am a " << type << endl;
    cout << "My color is " << _text << endl;
}

void Dog::setType(string tp) {
    type = tp;
}
