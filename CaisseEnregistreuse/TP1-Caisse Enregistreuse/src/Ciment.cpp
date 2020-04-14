#include "Ciment.h"

Ciment::Ciment(int quantite):Produit()
{
    this->quantite = quantite;
    this->taxe = fedprov;
    this->nom = "sacs de ciment";

}

float Ciment::calculerPrix(){
    return 25 * float(this->quantite) * (this->taxe)/100;
}

float Ciment::calculerTaxes(){
    return 25 * this->quantite * (float(this->taxe)/100-1);
}
