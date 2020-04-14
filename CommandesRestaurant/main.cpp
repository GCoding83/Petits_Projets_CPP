
#include <iostream>
#include <string>
#include <queue>
#include <exception>
#include "Commande.h"
#include "ConteneurVideException.h"

using namespace std;

int accueil();
int menuPrincipal();
void placerCommande(queue<Commande> &queueCommandes);
void afficherNumero(queue<Commande> &queueCommandes);
void afficherDescription(queue<Commande> &queueCommandes);
void effacerCommande(queue<Commande> &queueCommandes);
void quitter();


int main()
{
    accueil();

    queue<Commande> queueCommandesRegu;
    queue<Commande> queueCommandesPrio;



    int choix;

    do {

        choix = menuPrincipal();


        switch(choix)
        {
        case 1:
        {
            placerCommande(queueCommandesRegu);
        }
        break;

        case 2:
        {
            placerCommande(queueCommandesPrio);
        }
        break;

        case 3:
        {

            if (queueCommandesPrio.size()==0){

                try{

                    afficherNumero(queueCommandesRegu);

                    afficherDescription(queueCommandesRegu);

                    effacerCommande(queueCommandesRegu);

                } catch (const exception& ex) {
                    cout << ex.what() << endl;
                }

            }else{

                afficherNumero(queueCommandesPrio);

                afficherDescription(queueCommandesPrio);

                effacerCommande(queueCommandesPrio);
            }
        }
        break;

        case 4:
        {
            quitter();
        }
        break;

        default:
            cout << "\n" << endl;
            cout << "Choix incorrect." << endl;
            cout << "\n" << endl;
        }
    }

    while (choix != 4);
}



int accueil(){

    cout << "************************************************************" << endl;
    cout << "*************************COMMANDES**************************" << endl;
    cout << "************************************************************\n" << endl;
    cout << "Bienvenue chez Asian Pseudo Fusion." << endl;
}

int menuPrincipal(){
    int choix;

    cout << endl;
    cout << "***********************MENU PRINCIPAL**************************" << endl;
    cout << "1. Telephoniste: Placer une commande reguliere" << endl;
    cout << "2. Telephoniste: Placer une commande prioritaire" << endl;
    cout << "3. Cuisine: Obtenir la prochaine commande a preparer"<< endl;
    cout << "4. Quitter le logiciel"<< endl;

    cin >> choix;

    return choix;
}

void placerCommande(queue<Commande> &queueCommandes){
    int choixCommande;

    cout << endl;
    cout << "***********************CHOISIR UNE COMMANDE**************************" << endl;
    cout << "1. Poulet a l'ananas, macaroni au boeuf" << endl;
    cout << "2. Cotes levees a l'ail, Chow Mein cantonnais" << endl;
    cout << "3. Rouleaux de printemps, soupe Won Ton" << endl;
    cout << "4. Pad Thai, legumes au cari rouge" << endl;

    cin >> choixCommande;

    do {

        switch(choixCommande)
        {
        case 1:
        {
            queueCommandes.push(Commande(1, "Poulet à l'ananas, macaroni au boeuf"));
        }
        break;

        case 2:
        {
            queueCommandes.push(Commande(2, "Cotes levees à l'ail, Chow Mein cantonnais"));

        }
        break;

        case 3:
        {
            queueCommandes.push(Commande(3, "Rouleaux de printemps, soupe Won Ton"));
        }
        break;

        case 4:
        {
            queueCommandes.push(Commande(4, "Pad Thai, legumes au cari rouge"));
        }
        break;

        default:
            cout << "\n" << endl;
            cout << "Choix incorrect." << endl;
            cout << "\n" << endl;
        }
    } while (choixCommande != 1 && choixCommande != 2 && choixCommande != 3 && choixCommande != 4);
}

void afficherNumero(queue<Commande> &queueCommandes){

    if (queueCommandes.size() == 0)
        throw ConteneurVideException();

    Commande commande = queueCommandes.front();
    cout << "Commande #" << commande.getNumero() << ": ";
}

void afficherDescription(queue<Commande> &queueCommandes){
    Commande commande = queueCommandes.front();
    cout << commande.getDescription() << endl;
}

void effacerCommande(queue<Commande> &queueCommandes){
    queueCommandes.pop();
}

void quitter(){
    cout << "Merci d'avoir utilise notre logiciel. Au revoir" <<endl;

}

