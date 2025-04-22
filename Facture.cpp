#include<iostream>
#include<string>
#include"Facture.h"
using namespace std;

Facture::Facture(int num,float montant)
{
    this->numero=num;
    this->montant_total=montant;
}
Facture::~Facture(){};
void Facture::genererFacture() {
    cout << "Facture #" << numero << " - Montant total: " << montant_total << endl;
}
friend Facture::ostream&operator<<(ostream& out ,const facture& f );
{
    out << "le numero de la facture est: " << f.numero<< ", montant_total: " << f.montant_total;
    return out;

}
friend Facture::istream&operator>>(istream& in ,const Facture& f )
{
cout << "Entrer le numéro de facture: ";
in>> f.numero;
cout << "Entrer le  montant total de facture: ";
in>> f.montant_total;
return in;
}
