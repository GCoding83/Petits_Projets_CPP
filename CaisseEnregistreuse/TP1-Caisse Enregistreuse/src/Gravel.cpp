#include "Gravel.h"

Gravel::Gravel(int quantite):Produit()
{
    this->quantite = quantite;
    this->taxe = fed;
    this->nom = "kg de gravel";
}

float Gravel::calculerPrix(){
    return 0.8 * this->quantite * (this->taxe)/100;
}

float Gravel::calculerTaxes(){

    return 0.8 * this->quantite * (float(this->taxe)/100-1);
}

