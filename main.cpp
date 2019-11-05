#include <iostream>
#include <vector>
#include <ctime>

#include "animal.h"
#include "chien.h"
#include "chat.h"
#include "sphinx.h"

using namespace std;

int main(int agc, char** argv) {
    srand(time(0));
    vector<Animal*> basseCourt;

    basseCourt.push_back(new Chien());
    basseCourt.push_back(new Chat());
    basseCourt.push_back(new Chien());
    basseCourt.push_back(new Sphinx());

    vector<Animal*>::iterator it;
    for(it = basseCourt.begin(); it != basseCourt.end(); it++) {
        cout << (*it)->crier() << endl;
    }
}