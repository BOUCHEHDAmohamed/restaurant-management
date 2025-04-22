#include<iostream>
#include<string>
#include"Commande.h"
using namespace std;

Commande::Commande(int id,string date )
{this->id=id;
this->date=date;
}
Commande::~Commande(){
for(int i=0;i<plat.size();i++)
{
    delete plat[i];
}
plat.clear();
for(int i=0;i<client.size();i++)
{
    delete client[i];
}
client.clear();
}
 Commande::Commande(Commande const&c )
{
this->date=c.date;
this->id=c.id;
for(int i=0;c.plat.size();i++)
{
    plat.push_back(new Plat(*c.plat[i]));
}
}

// operation d'affectation
Commande& Commande::operator=(const Commandes& c) {
if (this != &c) {
         for(int i=0;i<plat.size();i++)
{
    delete plat[i];
}
plat.clear();
for(int i=0;i<client.size();i++)
{
    delete client[i];
}
client.clear();
// delete et clear avec boucle khater vector
//copier code constructeur par recopie
this->date=c.date;
this->id=c.id;
for(int i=0;c.plat.size();i++)
{
    plat.push_back(new Plat(*c.plat[i]));
}
    return *this;}
}

void Commande::ajouterPlat(Plat p) {
    Plat* p1=new Plat(p);
    if(rechercherPlat(p1->getNomPlat()!=-1))
    {
        cout<<"le plat deja existe"<<endl;

    }else{
    plat.push_back(p1);}
}
void Commande::supprimerPlat(string nomPlat)
{
    if(rechercherPlat()!=-1)
    {
        plat.erase(plat.begin()+rechercherPlat(nomPlat));
        cout<<endl<<"la  nouvelle commande est:";
        this->ostream&operator<<(ostream& out, const Commande& c);
    }
}
void Commande::rechercherPlat(string nomPlat)
{
    int a=-1;
    for(int i=O;i<plat.size();i++)
    {
        if (plat[i]->getNomPlat()==nomPlat){
            a=i;
        }
    }
    return a;

}

void Commande::calculerTotal() {
    float total = 0;
     for(int i=0;i<p.plat.size();i++)
        {total += p->getPrix();
    cout << "Total de la commande : " << total << " DT" << endl;}
}

friend Commande::ostream& operator<<(ostream& out, const Commande& c) {
    out << "Commande " << c.id << " - Date: " << c.date << endl;
    out << "Plats commandés : " << endl;
    for (int i=0;i<c.plat.size();i++) {
        out << "- " << *c.plat[i]<< endl;
    }
    out << "Nom de client : " << nom_client << endl;

     return out;
}
friend Commande::istream& operator>>(istream& in, Commande& c) {
    cout << "ID de la commande : ";
    in >> c.id;
    cout << "Date de la commande : ";
    in >> c.date;
     cout << "Nom duc client : ";
    in >> c.nom_client;
    return in;
}
