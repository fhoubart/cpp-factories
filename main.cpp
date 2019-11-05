#include <iostream>
#include <vector>
#include <map>
#include <ctime>

// Le fichier mail n'inclue que les types générique
// Il n'a aucune connaissance des implémentations particulières d'animeaux
#include "factoryManager.h"
#include "animalFactory.h"
#include "animal.h"


using namespace std;

/**
 * La fonction main
 */
int main(int agc, char** argv) {
    
    vector<Animal*> basseCourt; // Va contenir tous les animeaux créés.

    string input; // Le nom de l'animal entré par l'utilisateur à créer

    // On boucle jusqu'à ce que l'utilisateur tape end (on sort via un break)
    while(true) {
        cout << "Quel animal voulez-vous créer (end pour finir) ?" << endl << "> ";
        cin >> input;

        // Sortir en cas d'entrée "end"
        if(input == "end") break;

        // Récupérer la factory qui correspond à l'animal entré
        AnimalFactory* factory = FactoryManager::getInstance()->getFactory(input);

        // On vérifie avec de creer l'animal que la factory existe bien
        // (getfactory() renvoie un pointeur null si elle n'existe pas)
        if(factory) basseCourt.push_back(factory->creer());
        else cout << "L'animal demandé n'existe pas..." << endl;
    }

    // Boucle sur tous les animeaux créés pour les afficher via la méthode crier
    vector<Animal*>::iterator it;
    for(it = basseCourt.begin(); it != basseCourt.end(); it++) {
        cout << (*it)->crier() << endl;
    }
}