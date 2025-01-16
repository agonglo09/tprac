#ifndef CERCLE_H
#define CERCLE_H
#include "forme.h"

class Cercle : public Forme {
private:
    Point centre ;
    int r;
public:
    Cercle(const Couleur & traitement, const Couleur & remplissage, const Point & centre, int r);
    void demander() override;
    void afficher() const override;
    bool estValide(int l, int h) const override;
};

#endif