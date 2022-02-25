//
// Created by Maikol Guzman Alan on 2/24/22.
//

#ifndef OOP_INHERITANCE_DOG_H
#define OOP_INHERITANCE_DOG_H
#import "Animal.h"

/**
 * Derived class
 */
class Dog : public Animal {
public:
    void displayInfo(string _text);
    void setType(string tp);
    /**
     * Bark Method
     */
    void bark();
};


#endif //OOP_INHERITANCE_DOG_H
