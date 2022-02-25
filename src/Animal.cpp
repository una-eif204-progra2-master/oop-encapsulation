//
// Created by Maikol Guzman Alan on 2/24/22.
//

#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() {}

Animal::~Animal() {

}

void Animal::eat() {
    cout << "I can eat!" << endl;
}

void Animal::sleep() {
    cout << "I can sleep!" << endl;
}

const string &Animal::getColor() const {
    return color;
}

void Animal::setColor(const string &color) {
    Animal::color = color;
}

const string &Animal::getType() const {
    return type;
}

void Animal::setType(const string &type) {
    Animal::type = type;
}
