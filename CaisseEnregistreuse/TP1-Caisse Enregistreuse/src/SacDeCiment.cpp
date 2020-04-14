#include "SacDeCiment.h"

SacDeCiment::SacDeCiment(int quantite):Produit()
{
    this->quantite = quantite;
    this->taxe = fedprov;
    this->nom = "sacs de ciment";

}

float SacDeCiment::calculerPrix(){
    return 25 * float(this->quantite) * (this->taxe)/100;
}

float SacDeCiment::calculerTaxes(){
    return 25 * this->quantite * (float(this->taxe)/100-1);
}
