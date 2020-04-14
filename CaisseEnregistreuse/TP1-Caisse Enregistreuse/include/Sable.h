#ifndef SABLE_H
#define SABLE_H
#include "Produit.h"
#include <string>

using namespace std;

class Sable : public Produit
{
    public:
        Sable(int quantite);
        float calculerPrix();
        float calculerTaxes(){ return 0;}
        string getNom(){ return this->nom;}
        int getQuantite(){ return this->quantite;}

    private:
        string nom;

};

#endif // SABLE_H
