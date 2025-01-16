#ifndef COULEUR_H
#define COULEUR_H

#include <string>

class Couleur {
private:
    int rouge, vert, bleu;
public:
    Couleur(int r = 0, int v = 0, int b = 0);
    std::string toHexa() const;
    std::string toString() const;
};