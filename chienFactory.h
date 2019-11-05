#ifndef CHIEN_FACTORY_H
#define CHIEN_FACTORY_H

#include "animalFactory.h"
#include "chien.h"

/**
 * La factory dédiée à la création de Chien.
 */
class ChienFactory : public AnimalFactory {
private:
    static int dummy;

public:
    /**
     * La méthode créer redéfinie qui créer un Chien
     */
    virtual Animal* creer();

    static int insertionFactoryManager();

};

#endif