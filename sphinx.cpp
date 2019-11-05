#include "sphinx.h"

std::string Sphinx::crier() {
    std::string questions[5];
    questions[0] = "Quel est la couleur du cheval blanc d'Henri 4 ?";
    questions[1] = "Que donne un petit pois qui se bagarrent avec une carotte ?";
    questions[2] = "Quelle est la boisson préférée des héros de bandes dessinées ?";
    questions[3] = "Qu'est-ce qui est sale quand il est blanc et propre quand il est noir ?";
    questions[4] = "Comment appelle-t-on un chat tout-terrain ?";

    return questions[rand()%5];
}