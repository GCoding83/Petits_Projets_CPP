#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#include "Produit.h"
#include "Terre.h"
#include "Sable.h"
#include "Gravel.h"
#include "Ciment.h"
#include "Planche.h"


using namespace std;

int accueil();
int choisirProduit();
void creerProduit(vector<Produit*> &tabProduits, int choix);
void afficherFacture(vector<Produit*> &tabProduits);
void quitter(vector<Produit*> &tabProduits);


int main()
{
    accueil();

    vector<Produit*> tabProduits;

    int choix;

    do {

        choix = choisirProduit();

        creerProduit(tabProduits, choix);

    } while (choix != 6);

    afficherFacture(tabProduits);

    quitter(tabProduits);
}



int accueil(){

    cout << "************************************************************" << endl;
    cout << "*****************CAISSE ENREGISTREUSE***********************" << endl;
    cout << "************************************************************\n" << endl;
    cout << "Bienvenue au ROSEMONT DEPOT." << endl;
}

int choisirProduit(){
    int choix;

    cout << endl;
    cout << "Saisissez un produit, ou faites 6 pour afficher la facture et quitter:" << endl;
    cout << "1. Terre" << endl;
    cout << "2. Sable"<< endl;
    cout << "3. Gravel"<< endl;
    cout << "4. Ciment" << endl;
    cout << "5. Planches"<< endl;
    cout << "6. Afficher la facture et quitter"<< endl;
    cin >> choix;

    return choix;
}

void creerProduit(vector<Produit*> &tabProduits, int choix){

    int quantite;

    switch(choix)
    {
    case 1:
    {
        cout << "La terre se vend 1.20$ le kilo." << endl;
        cout << "Combien de kilos desirez-vous acheter? :" << endl;
        cin >> quantite;

        tabProduits.push_back(new Terre(quantite));
    }
    break;

    case 2:
    {
        cout << "Le sable se vend 1.00$ le kilo. "<< endl;
        cout << "Combien de kilos desirez-vous acheter? :" << endl;
        cin >> quantite;

        tabProduits.push_back(new Sable(quantite));
    }
    break;

    case 3:
    {
        cout << "La gravel se vend 0.80$ le kilo." << endl;
        cout << "Combien de kilos desirez-vous acheter? :" << endl;
        cin >> quantite;

        tabProduits.push_back(new Gravel(quantite));
    }
    break;

    case 4:
    {
        cout << "Les sacs de ciment sont 25$ par sac." << endl;
        cout << "Combien en voulez-vous? :" << endl;
        cin >> quantite;

        tabProduits.push_back(new Ciment(quantite));
    }
    break;


    case 5:
    {
        cout << "Les planches se vendent 5$ chacune." << endl;
        cout << "Combien en voulez-vous? :" << endl;
        cin >> quantite;

        tabProduits.push_back(new Planche(quantite));
    }
    break;

    case 6:

        cout << endl;
        cout << "Votre commande est complete." << endl;
        break;

    default:
        cout << "\n" << endl;
        cout << "Choix incorrect." << endl;
        cout << "\n" << endl;
    }
}

void afficherFacture(vector<Produit*> &tabProduits){

    float compteurTaxes=0;
    float compteurTotal=0;

    cout << "\n\n" << endl;
    cout << "***************************" << endl;
    cout << "***AFFICHAGE DE FACTURE****" << endl;
    cout << "***************************" << endl;

    for (int i=0; i<tabProduits.size(); i++)
    {
        cout << tabProduits[i]->getQuantite() << " ";
        cout << tabProduits[i]->getNom() << ": ";
        cout << setprecision(2) << fixed << tabProduits[i]->calculerPrix() - tabProduits[i]->calculerTaxes() << "$" << endl;
        compteurTaxes += tabProduits[i]->calculerTaxes();
        compteurTotal += tabProduits[i]->calculerPrix();
    }
    cout << endl;
    cout << "Total avant taxes: " << setprecision(2) << fixed << compteurTotal - compteurTaxes << "$" << endl;
    cout << "Taxes: " << setprecision(2) << fixed << compteurTaxes << "$" << endl;
    cout << "Total: " << setprecision(2) << fixed << compteurTotal << "$" << endl;

}

void quitter(vector<Produit*> &tabProduits){

    cout << "\n\n\n" << endl;
    cout << "************************************************************" << endl;
    cout << "************************************************************" << endl;
    cout << "Merci d'avoir magasine chez ROSEMONT DEPOT. A la prochaine!" << endl;

    for (int i=0; i < tabProduits.size(); i++){
        delete tabProduits[i];
    }
}

