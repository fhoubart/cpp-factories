#include "chatFactory.h"

Animal* ChatFactory::creer() {
    return new Chat();
}
