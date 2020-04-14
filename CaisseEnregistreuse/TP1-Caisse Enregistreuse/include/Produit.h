#ifndef PRODUIT_H
#define PRODUIT_H
#include <string>

using namespace std;

enum taxes{aucune=100, fed=107, fedprov=115};

class Produit
{
    public:
        virtual ~Produit(){}
        virtual float calculerPrix()=0;
        virtual float calculerTaxes()=0;
        virtual string getNom()=0;
        virtual int getQuantite()=0;

    protected:
        taxes taxe;
        int quantite;
};

#endif // PRODUIT_H
