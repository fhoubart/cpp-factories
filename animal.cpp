#include "animal.h"

Animal::Animal() {
    this->age = 0;
}

Animal::Animal(int age) {
    this-> age = age;
}

Animal::Animal(Animal const &orig) {
    this->age = orig.age;
}

void Animal::vieillir() {
    this->age ++;
}