#ifndef CHAT_FACTORY_H
#define CHAT_FACTORY_H

#include "animalFactory.h"
#include "chat.h"

/**
 * La factory dédiée à la création de Chat.
 */
class ChatFactory : public AnimalFactory {

public:
    /**
     * La méthode créer redéfinie qui créer un Chat
     */
    virtual Animal* creer();

};

#endif