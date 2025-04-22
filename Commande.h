#include<iostream>
#include<string>
#include"Plat.h"
using namespace std;

class Commande{
private:
    int id;
    string date;
    vector<Plat*> plat;
    string nom_client;
public:
    Commande(int id=0,string date="" );
    Commande(const Commande& );
    ~Commande();
    Commande& operator=(const Commande& );
    friend ostream&operator<<(ostream& ,const Commande& );
    friend istream&operator>>(istream& ,const Commande& );
    void ajouterPlat(Plat );
    void supprimerPlat(string);
    int rechercherPlat(string );
    void calculerTotal();
    getNom_client(){return nom_client;}
    getIdComm(){return id;}

};
