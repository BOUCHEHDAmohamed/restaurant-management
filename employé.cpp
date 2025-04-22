#include<iostream>
#include<Employé.h>
#include<string>
Employe::Employe(string n ,float s,string r)
{   this->n=nom;
    this->s=salaire;
    this->r=role;

}

virtual Employe::~Employe() {
    for(int i=0;i<projets.size();i++)
    {
        delete projets[i];
    }
    projets.clear();
}

Employe::Employe(const Employe& e){
this->salaire=e.salaire;
this->nom=e.nom;
this->role=e.role;
for(int i=0;i<projets.size();i++)
{
    projets.push_back(new Projet(*e.projets[i]));
}

}


friend Employe:: ostream& operator<<(ostream& out,const Employe& e){
    out << "Rôle: " << e.role << ", Salaire: " << e.salaire;
    out<<"Projets de"<<e.role<<":\n";
    for(int i=O;i<e.projets.size();i++)
    {  // cout << "- " << p->getNom() << "\n";
        cout<<"-"<<*e.projets[i]<<"\n"<<endl;
    }
    }
    return out;
}

friend Employe:: istream& operator>>( istream& in,const Employe& e){
 cout << "Entrer le nom: "<<endl;
in>>e.nom;
 cout << "Entrer le salaire: "<<endl;
in>>e.salaire;
cout << "Entrer le rôle: "<<endl;
in>>e.role;
string r;
float s;
return in;
}
Employe& operator=Employe(const Employe& e)
{
if (this != &e) {
    for(int i=0;i<projets.size();i++)
{
    delete projets[i];
}
projets.clear();
this->nom=e.nom;
this->role=e.role;
this->salaire=e.salaire;
for(int i=0;e.projets.size();i++)
{
    projets.push_back(new projets(*e.projets[i]));
}
    return *this;}
}
}
void Employe::ajouterProjet(Projet p) {
    Projet* p1=new Projet(p);
    if(rechercherProjet(p1->getNomProjet()!=-1))
    {
        cout<<"le Projet deja existe"<<endl;

    }else{
    projet.push_back(p1);}
}
void Employe::supprimerProjet(string nomProjet)
{
    if(rechercherProjet()!=-1)
    {
        projet.erase(projets.begin()+rechercherProjet(nomProjet));
        cout<<endl<<"le nouveau projet est:";
        this->ostream&operator<<(ostream& out, const Employe& e);
    }
}
void Employe::rechercherProjet(string nomProjet)
{
    int a=-1;
    for(int i=O;i<projets.size();i++)
    {
        if (projet[i]->getNomProjet()==nomProjet){
            a=i;
        }
    }
    return a;

}




















