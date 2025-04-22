#include<vector>
#include<iostream>
#include"chefCuisinier.h"
#include"Serveur.h"
#include"Table.h"
using namespace std;

class MaitreHotel : public ChefCuisinier, public Serveur {
private:

    vector<Table*> tablesResponsables; // Exemple : tables dont il a la charge
public:
    MaitreHotel(float s,string ,int table,string spec);
    ~MaitreHotel();
    MaitreHotel(MaitreHotel const& );
    MaitreHotel operator=(MaitreHotel const& );
    void ajouterTable();
    int rechercherTable(int);
    void supprimerTable();
    friend ostream& operator<<(ostream& ,const MaitreHotel& );
    friend istream& operator>>(istream& ,const  MaitreHotel& );
    void afficher();


};

