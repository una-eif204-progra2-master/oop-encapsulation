//
// Created by Maikol Guzman Alan on 2/24/22.
//

#include <iostream>
#include <string>
using namespace std;

#ifndef OOP_INHERITANCE_ANIMAL_H
#define OOP_INHERITANCE_ANIMAL_H
/**
 * Base Class
 */
class Animal {
private:
    string color;
protected:
    string type;
public:
    /**
     * Basic Constructor
     */
    Animal();

    /**
     * Basic Destructor
     */
    virtual ~Animal();

    /**
     * Method eat
     */
    void eat();

    /**
     * Method sleep
     */
    void sleep();

    const string &getColor() const;

    void setColor(const string &color);

    const string &getType() const;

    void setType(const string &type);
};


#endif //OOP_INHERITANCE_ANIMAL_H
