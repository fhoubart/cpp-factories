#include "factoryManager.h"

void FactoryManager::ajouterFactory(std::string nom, AnimalFactory* factory) {
    this->factories[nom] = factory;
}

AnimalFactory* FactoryManager::getFactory(std::string nom) {
    // Vérifier que la clef existe avant de renvoyer n'importe quoi
    if(this->factories.find(nom) != this->factories.end()) {
        // La clef existe, on la renvoie
        return this->factories[nom];
    } else {
        // La clef n'existe pas, on renvoie un pointeur null (0)
        return 0;
    }
}

/**
 * La création de l'instance est effectuée dans cette méthode.
 * C'est nécessaire pour que les appels de l'instance dans les blocks de code
 * static des implémentations de Factory puisse récupérer une instance valide
 * du FactoryManager. En effet, l'ordre d'exécution des blocks static n'étant
 * pas garanti, on n'est pas à l'abri que le code d'une Factory qui l'enregistre
 * auprès du FactoryManager s'exécute avant le code d'initialisation de la
 * FactoryManager elle même.
 */
FactoryManager* FactoryManager::getInstance() {
    // Si l'instance static du singleton n'existe pas encore, on la crée
    if(FactoryManager::instance == 0) {
        FactoryManager::instance = new FactoryManager();
    }
    // On renvoie l'instance static
    return FactoryManager::instance;
}

// Initialisation de l'attribut static du Singleton/
FactoryManager* FactoryManager::instance = 0;
