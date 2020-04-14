#ifndef SACDECIMENT_H
#define SACDECIMENT_H
#include "Produit.h"
#include <string>

using namespace std;

class SacDeCiment : public Produit
{
    public:
        SacDeCiment(int quantite);
        float calculerPrix();
        float calculerTaxes();
        string getNom(){ return this->nom;}
        int getQuantite(){ return this->quantite;}

    private:
        string nom;

};

#endif // SACDECIMENT_H
