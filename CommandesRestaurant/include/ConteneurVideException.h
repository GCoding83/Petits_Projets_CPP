#ifndef CONTENEURVIDEEXCEPTION_H
#define CONTENEURVIDEEXCEPTION_H

#include "exception"

using namespace std;


class ConteneurVideException : public exception
{
    public:
        const char* what() const noexcept { return "Il n'y a presentement aucune commande."; }
};

#endif // CONTENEURVIDEEXCEPTION_H
