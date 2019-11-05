#ifndef CHIEN_H
#define CHIEN_H

#include "animal.h"

class Chien : public Animal {

public:
    virtual std::string crier();
};

#endif
