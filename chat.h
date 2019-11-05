#ifndef CHAT_H
#define CHAT_H

#include "animal.h"

class Chat : public Animal {

public:
    virtual std::string crier();
};

#endif
