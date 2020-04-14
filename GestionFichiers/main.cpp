#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    string date;
    string nom;
    char next;
    vector<string> tabNoms;
    vector<string> tabDates;

    //Stream pour lire le fichier 1
    ifstream lire1;
    lire1.open("fichier1.txt");

    //Stream pour ecrire dans le fichier 2
    ofstream ecrire2;
    ecrire2.open("fichier2.txt", ios::app);

    //Aller chercher les noms du fichier1 et les enregistrer dans un tableau de noms.
    do
    {
        if (next == '\n')
        {
            break;
        }
        lire1 >> nom;
        tabNoms.push_back(nom);
    }
    while (lire1.get(next));

    //Aller chercher les dates du fichier1 et les enregistrer dans un tableau de dates.
    do
    {
        lire1 >> date;
        tabDates.push_back(date);
    }
    while (lire1.get(next));


    //Ecrire le résultat avec le formattage désiré pour le fichier2
    for (int i=0; i<tabNoms.size(); i++)
    {
        //Ecrire le nom d'utilisateur
        ecrire2 << tabNoms[i];
        ecrire2 << " ";

        //Ecrire l'annee
        ecrire2.write(tabDates[i].c_str(), sizeof(char)*4);
        ecrire2 << "-";

        //Ecrire le mois
        ecrire2.write(tabDates[i].c_str()+4, sizeof(char)*2);
        ecrire2 << "-";

        //Ecrire le jour
        ecrire2.write(tabDates[i].c_str()+6, sizeof(char)*2);
        ecrire2 << "\n";
    }

    lire1.close();
    ecrire2.close();
    return 0;
}

