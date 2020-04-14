#include "Sable.h"

Sable::Sable(int quantite):Produit()
{
    this->quantite = quantite;
    this->taxe = aucune;
    this->nom = "kg de sable";
}

float Sable::calculerPrix(){
    return this->quantite * (this->taxe)/100;
}
