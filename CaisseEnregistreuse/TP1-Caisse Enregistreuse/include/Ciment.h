#ifndef CIMENT_H
#define CIMENT_H
#include "Produit.h"
#include <string>

using namespace std;

class Ciment : public Produit
{
    public:
        Ciment(int quantite);
        float calculerPrix();
        float calculerTaxes();
        string getNom(){ return this->nom;}
        int getQuantite(){ return this->quantite;}

    private:
        string nom;

};

#endif // CIMENT_H
