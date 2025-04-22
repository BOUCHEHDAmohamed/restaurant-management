 #include<iostream>
 #include"Serveur.h"
 Serveur::Serveur(string n ="",float s = 0.0,string r = "")
        : Employe(n,s, r){};
 Serveur::~Serveur(){
 for(int i=0;i<tables_gerees.size();i++)
 {
     delete tables_gerees[i];
 }
 tables_gerees.clear();


 for(int i=0;i<commandes.size();i++)
 {
     delete commandes[i];
 }
 commandes.clear();

 }
 Serveur::Serveur(const Serveur& s)
    : Employe(s.nom,s.salaire, s.role)
{
    for(int i=0;i<s.tables_gerees.size();i++)
    {
     tables_gerees* t=new Table(*s.tables_gerees[i]);
     tables_gerees.push_back(t);
    }
    for(int i=0;i<s.commandes.size();i++)
    {
     commandes* c=new Commande(*s.commandes[i]);
     commandes.push_back(c);
    }

}
Serveur& Serveur::operator=(const Serveur& s) {
    if (this != &other) {
        Employe::operator=(s);
        for(int i=0;i<tables_gerees.size();i++)
 {
     delete tables_gerees[i];
 }
 tables_gerees.clear();


 for(int i=0;i<commandes.size();i++)
 {
     delete commandes[i];
 }
 commandes.clear();

 }
 for(int i=0;i<s.tables_gerees.size();i++)
    {
     tables_gerees* t=new Table(*s.tables_gerees[i]);
     tables_gerees.push_back(t);
    }
    for(int i=0;i<s.commandes.size();i++)
    {
     commandes* c=new Commande(*s.commandes[i]);
     commandes.push_back(c);
    }
    return *this}

void Serveur::calculerSalaire() {
    salaire += commandes.size() * 0.5; // Bonus de 0.5€ par commande
}
 void Serveur:: prendreCommande(Commande c) {
        commandes.push_back(c);
    }

void Serveur::servirCommande(Commande c) {
    auto it = find_if(commandes.begin(), commandes.end(),
        [&c](Commande* cmd) { return *cmd == c; });

    if (it != commandes.end()) {
        delete *it;
        commandes.erase(it);
    }
}
friend Serveur::ostream& operator<<(ostream& out, const Serveur& s) {
    out << "Serveur -Salaire:" << s.salaire
       << ", Role:" << s.role
       << ", Nom:" << s.nom
       << ", Commandes:" <<
       for (int i=0;i<s.commandes.size();i++) {
        out << "- " << *s.commandes[i]<< endl;
                                                    }
       out<< ", Tables:" <<endl;
       for (int i=0;i<s.tables_gerees.size();i++) {
        out << "- " << *s.tables_gerees[i]<< endl;
    };
    return out;
}
friend Serveur::istream& operator>>(istream& in, Serveur& s) {
     in >> static_cast<Employe&>(s);
     cout << "Entrez le nom: ";
    in >> s.nom;
    cout << "Entrez le salaire de base : ";
    in >> s.salaire;
    cout << "Entrez le rôle: ";
    in >> s.role;
    return in;
}















