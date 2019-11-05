#ifndef FACTORY_MANAGER_H
#define FACTORY_MANAGER_H

#include <map>
#include <string>

#include "animalFactory.h"

/**
 * Cette classe implémente le Design Pattern SINGLETON.
 * Elle sert à récupérer une Factory à partir du nom d'un Animal.
 * Chaque implémentation de Factory a la responsabilité de s'enregistrer auprès de cette classe.
 * Ainsi la fonction main n'a pas à connaitre d'autres classes que les types génériques Animal et AnimalFactory.
 */
class FactoryManager {

private:
    // La map qui contient les associations nom/factory
    std::map<std::string, AnimalFactory*> factories;

    // L'instance static pour l'implémentation du Design Pattern Singleton
    static FactoryManager* instance;

public:
    // Méthode static pour récupérer l'instance unique du Singleton
    // Cette méthode va gérer la création de l'instance static lors du premier accès
    static FactoryManager* getInstance();

    /**
     * Ajouter une association nom/factory
     */
    void ajouterFactory(std::string nom, AnimalFactory* factory);

    /**
     * Récupérer une factory à partir de son nom
     */
    AnimalFactory* getFactory(std::string nom);
};

#endif