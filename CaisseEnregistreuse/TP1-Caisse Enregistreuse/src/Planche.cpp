#include "Planche.h"

Planche::Planche(int quantite):Produit()
{
    this->taxe = fed;
    this->quantite = quantite;
    this->nom = "planches";

}

float Planche::calculerPrix(){
    return 5 * float(this->quantite) * (this->taxe)/100;
}

float Planche::calculerTaxes(){
    return 5 * this->quantite * (float(this->taxe)/100-1);
}
