#ifndef COMMANDE_H
#define COMMANDE_H
#include "string"

using namespace std;

class Commande
{
    public:
        Commande(int numero, string description);
        int getNumero(){return this->numero;}
        string getDescription(){return this->description;}

    private:
        int numero;
        string description;
};

#endif // COMMANDE_H
