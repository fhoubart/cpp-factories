#include "chienFactory.h"
#include "factoryManager.h"

Animal* ChienFactory::creer() {
    return new Chien();
}

int ChienFactory::insertionFactoryManager() {
    FactoryManager::getInstance()->ajouterFactory("chien", new ChienFactory());
    return 0;
}

int ChienFactory::dummy = ChienFactory::insertionFactoryManager();
