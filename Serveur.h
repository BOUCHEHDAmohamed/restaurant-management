#pragma once
#include<vector>
#include<iostream>
#include<string>
#include"Table.h"
#inclue"Commande.h"
#include"Employé.h"
class Serveur:virtual public Employe{
private:
    vector<Table*> tables_gerees;
    vector<Commande*> commandes;

public:
    Serveur(string n="",float s = 0.0,string r = "")
        : Employe(n,s, r);
    Serveur(const Serveur& ):Employe(string,float,string);
    void prendreCommande(Commande );
    void servirCommande(Commande );
    ~Serveur();
    serveur& operator=(const Serveur& ); //operateur d'affectaion
    friend ostream&operator<<(ostream& ,const Serveur& );
    friend istream&operator>>(istream& ,const Serveur &);
    void calculerSalaire() ;// methode de la classe base
};
