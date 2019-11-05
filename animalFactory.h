#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include "animal.h"

/**
 * Classe abstraite pour toutes les Factories
 */
class AnimalFactory {

public:
    /**
     * Une factory contient une unique méthode destinée à créer un objet
     * de type Animal. C'est l'implémentation de la Factory qui décidera
     * de la classe fille à Animal à utiliser.
     */
    virtual Animal* creer() = 0;

};

#endif