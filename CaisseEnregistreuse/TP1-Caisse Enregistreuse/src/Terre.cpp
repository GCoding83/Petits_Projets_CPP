#include "Terre.h"

Terre::Terre(int quantite):Produit()
{
    this->quantite = quantite;
    this->taxe = aucune;
    this->nom = "kg de terre";
}

float Terre::calculerPrix(){
    return 1.2 * this->quantite * (this->taxe)/100;
}
