#include<iostream>
#include<string>
#include"Paiement.h"
using namespace std;
Paiement::Paiement(string m)
{
    this->methode=m;
}
Paiement::~Paiement()
{   for( int i=O;i<fact.size();i++){
        delete fact[i];}
        fact.clear();
}
Paiement::Paiement(Paiement const& p)
{
   this->methode=p.methode;
   for(int i=0;i<p.fact.size();i++)
   {
       Facture* f=new Facture(*p.fact[i]);
       fact.push_back(f);
   }

}
void Paiement::effectuerPaiement(){
    if(facture)
    {
        cout<<"Paiement de "<<facture->getMontantTotal()<<"DT effectué par"<<methode<<"pour la facture"<<facture->getNumero()<<"."<<endl;
    }
    else{
        cout << "Aucune facture liée au paiement." << endl;
    }
}
friend Paiement::ostream&operator(ostream& out, const& Paiement p)
{
    out<<"la methode de paiement est:"<<p.methode<<;
    out<<",numero-facture"<<p.fact->getNumero()<<", de montant:"<<p.fact->getMontantTotal();
    return out;
}
 friend Paiement::istream&operator>>(istream& in ,const Paiement& p );
{
cout << "Entrer la methode  de paiement: ";
in>> p.methode;
return in }

Paiement& ::Paiement operator=(const Paiement& p){

if(this!=&p)
{ for( int i=O;i<fact.size();i++){
        delete fact[i];}
        fact.clear();
     this->methode=p.methode;
   for(int i=0;i<p.fact.size();i++)
   {
       Facture* f=new Facture(*p.fact[i]);
       fact.push_back(f);
   }

}
return *this;
}
void Paiement::ajouterFacture(Facture f) {
    Facture* f1=new Facture(f);
    if(rechercherFacture(p1->getNumero()!=-1))
    {
        cout<<"la facture deja existe"<<endl;

    }else{
    fact.push_back(f1);}
}
void supprimerFacture(int x)
{
    if(rechercherFacture()!=-1)
    {
       fact.erase(fact.begin()+rechercherFacture(x));
        cout<<endl<<"le nouveau paiement  est:";
        this->ostream&operator<<(ostream& out, const Facture& c);
    }
}
void rechercherFacture(int x)
{
    int a=-1;
    for(int i=O;i<fact.size();i++)
    {
        if (fact[i]->getNumero()==x){
            a=i;
        }
    }
    return a;

}
