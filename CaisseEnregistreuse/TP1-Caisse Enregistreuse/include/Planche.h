#ifndef PLANCHE_H
#define PLANCHE_H
#include "Produit.h"
#include <string>

using namespace std;

class Planche : public Produit
{
    public:
        Planche(int quantite);
        float calculerPrix();
        float calculerTaxes();
        string getNom(){ return this->nom;}
        int getQuantite(){ return this->quantite;}

    private:
        string nom;
};

#endif // PLANCHE_H
