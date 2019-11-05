#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
private:
    int age;

public:
    // Default constructor
    Animal();
    // Constructor with age
    Animal(int age);
    // Copy constructor
    Animal(Animal const &orig);

    void vieillir();
    virtual std::string crier() = 0;
};

#endif
