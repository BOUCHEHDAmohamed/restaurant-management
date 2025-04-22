#include<vector>
#include<iostream>
#include<string>
#include"Facture.h"
using namespace std;
class Paiement{
private:
    string methode;
    vector<Facture*>fact;
public:
    Paiement(string m="");
    ~Paiement();
    Paiement(Paiement const& );
    Paiement& operator=(const Paiement& );
    friend ostream&operator<<(ostream& ,const Paiement& );
    friend istream&operator>>(istream& ,const Paiement& );
    void effectuerPaiement();
    int rechercherFacture(int);
    void supprimerFacture(int);
    void ajouterFacture(Facture);
    void setMethode(string m){methode=m);}
    void getMethode(){return methode;}
   //  Facture* getFacture(){return facture;}

};

