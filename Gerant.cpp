#include<iostream>
#include<string>
#include"Gerant.h"
#include<typeinfo>

Gerant::Gerant(string n,float s,string r):Employe(n,s,r){};

Gerant::Gerant(const Gerant& g):Employe(g)
 { Employe *e;
for(int i=0;i<g.equipe.size();i++)
{
    if(typeid(*g.equipe[i])==typeid(Employe){

        e=new Employe(*g.equipe[i]);
    }
    else if ( typeid(*g.equipe[i])==typeid(Serveur))
    {
        e=new Serveur(static_cast<const Serveur&>(*g.equipe[i]));
    }
    else if ( typeid(*g.equipe[i])==typeid(ChefCuisiner))
    {
        e=new Serveur(static_cast<const ChefCuisiner&>(*g.equipe[i]));
    }
    equipe.push_back(e);
}

}

Gerant&::Gerant operator=(const Gerant& g){
if(this!=&g)
{ Employe::operator=(g);
for (int i=0< g.equipe.size(); ++i) {
            delete equipe[i];
            }
equipe.clear();
 Employe *e;
for(int i=0;i<g.equipe.size();i++)
{
    if(typeid(*g.equipe[i])==typeid(Employe){

        e=new Employe(*g.equipe[i]);
    }
    else if ( typeid(*g.equipe[i])==typeid(Serveur))
    {
        e=new Serveur(static_cast<const Serveur&>(*g.equipe[i]));
    }
    else if ( typeid(*g.equipe[i])==typeid(ChefCuisiner))
    {
        e=new Serveur(static_cast<const ChefCuisiner&>(*g.equipe[i]));
    }
    equipe.push_back(e);
}
}
        return *this;
}

void Gerant::genererRapportVentes() {
    cout << "=== Rapport des ventes ===" << endl;
    for (int i=0;i<equipe.size();i++) {
       // e->afficher();
        cout << "---------------------" << endl;
    }


void Gerant::calculerSalaire() {
    float bonus = equipe.size() * 100.0;
    salaire += bonus;
    cout << "Salaire calcul� avec bonus: " << salaire << endl;
}
~Gerant() {
        for (int i = 0; i < equipe.size(); ++i) {
            delete equipe[i];
        }
        equipe.clear();}
void Employe::ajouterEmployeParRole() {
    string role;
    cout << "Quel est le r�le de l'employ� � ajouter ? (serveur / chef / gerant): ";
    in >> role;

    Employe* nouvelEmploye = nullptr; // un pointeur vide =nullptr donc de mm pour superviseur

    if (role == "serveur") {
        Serveur* s = new Serveur(1200.0, role, this);
       cin >> *s;
        s->calculerSalaire();
        nouvelEmploye = s;
    }
    else if (role == "chefCuisiner") {
        ChefCuisinier* c = new ChefCuisinier(2000.0, role, this);
       cin >> *c;
        c->calculerSalaire();
        nouvelEmploye = c;
    }
    else if (role == "gerant") {
        Gerant* g = new Gerant(1500.0, role, this);
        cin >> *g;
        g->calculerSalaire();
        nouvelEmploye = g;
    }
    else {
       cout << "R�le inconnu. Employ� non ajout�." <<endl;
        return;
    }

    equipe.push_back(nouvelEmploye);
cout << "Employ� ajout� avec succ�s.\n";
/* or
void Gerant::ajouterEmployeParRole(Employe* e)
Employe *emp;
{
    if(typeid(e)==typeid(Employe){

        emp=new Employe(e);
    }
    else if ( typeid(c)==typeid(Serveur))
    {
        emp=new Serveur(static_cast<const Serveur&>(e));
    }
    else if ( typeid(e)==typeid(ChefCuisiner))
    {
        emp=new Serveur(static_cast<const ChefCuisiner&>(e));
    }
    equipe.push_back(emp);
}
*/
}
void Gerant::superviserEmploye(Employe* e) {
    cout << "Supervision de " << e->getNom() << endl;
}
Employe* Gerant:: rechercherEmploye(string nom) { //chatt
    for (int i=0;i<e.equipe.size();i++) {
        if (e->getNom() == nom) {
           cout << "Employ� trouv� : " << *e << endl;
            return e;
        }
    }
   cout << "Aucun employ� avec le r�le \"" << role << "\" trouv�." <<endl;
    return nullptr;
}
void Employe::supprimerEmploye(string nom)
{  //chat not sure
    if(int it=equipe.begin();it!=equipe.end();i++)
    {
        if((*it)->getNom()==nom)
        {
            delete *it; //liberation memeoire
            equipe.erase(it);
            cout<<"Employe supprim�.\n"<<endl;
            return;
        }
    }
    cout << "Aucun employ� avec le r�le \"" << role << "\" trouv�.\n";
}
void Gerant::modifierSalaire(string nom, float nouveauSalaire) {
    // chat not sure
        Employe* e = rechercherEmploye(nom);
        if (e)
            e->setSalaire(nouveauSalaire);
        else
            cout << "Modification �chou�e : employ� non trouv�.\n";
    }
friend Gerant::ostream& operator<<(ostream& out, const Gerant& g) {
    out << "=== Infos du Gerant ===" << endl;
    out << "Nom: " << g.getNom() << endl;
    out << "Role: " << g.getRole() << endl;
    out << "Salaire: " << g.getSalaire() << endl;
    for (int i=0;i<g.equipe.size();i++) {
        if (equipe[i]) out << "\t- " << *equipe[i] << endl;
    }
    return out;
}
friend Gerant::istream& operator>>(istream& in, Gerant& g) {
    string role;
    float salaire;
    string nom;
     cout << "Entrez le nom du g�rant: ";
     in>>nom;
    g.setNom(nom);
    cout << "Entrez le r�le du g�rant : ";
    in >> role;
    g.setRole(role);

    cout << "Entrez le salaire de base du g�rant : ";
    in >> salaire;
    g.setSalaire(salaire);

    int nb;
    cout << "Combien d�employ�s voulez-vous ajouter � l��quipe ? ";
    in >> nb;

    for (int i = 0; i < nb; ++i) {
        Employe* equipe[i] = new Employe();
        cout << "Employ� " << i + 1 << " :" << endl;
        in >> *equipe[i];
        g.equipe.push_back(*equipe[i]);
    }

    return in;
}
