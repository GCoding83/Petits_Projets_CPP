#ifndef TERRE_H
#define TERRE_H
#include "Produit.h"
#include <string>

using namespace std;

class Terre : public Produit
{
    public:
        Terre(int quantite);
        float calculerPrix();
        float calculerTaxes(){ return 0;}
        string getNom(){ return this->nom;}
        int getQuantite(){ return this->quantite;}

    private:
        string nom;
};

#endif // TERRE_H
