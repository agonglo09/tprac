Canvas.h
cpp
Copier
Modifier
#ifndef CANVAS_H
#define CANVAS_H

#include "Forme.h"
#include <vector>

class Canvas {
private:
    int largeur, hauteur;
    Couleur fond;
    std::vector<Forme*> formes;
public:
    Canvas(int largeur, int hauteur, const Couleur& fond);
    void ajouterForme(Forme* forme);
    void afficher() const;
    ~Canvas();
};

#endif