#ifndef GENERATEUR_H
#define GENERATEUR_H
#include "Canvas.h"

class Generateur {
public:
    virtual void generer(const Canvas&canvas) = 0;
    virtual ~Generateur() {}
};

#endif