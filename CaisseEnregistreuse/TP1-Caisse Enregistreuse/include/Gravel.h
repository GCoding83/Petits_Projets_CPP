#ifndef GRAVEL_H
#define GRAVEL_H
#include "Produit.h"
#include <string>

using namespace std;

class Gravel : public Produit
{
    public:
        Gravel(int quantite);
        float calculerPrix();
        float calculerTaxes();
        string getNom(){ return this->nom;}
        int getQuantite(){ return this->quantite;}

    private:
        string nom;
};

#endif // GRAVEL_H
