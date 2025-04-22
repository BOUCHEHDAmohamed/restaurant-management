#pragma once
#include<vector>
#include<iostream>
#include<string>
// classe de base abstraite
class Employe{
protected:
    string nom;
    float salaire;
    string:role;
    vector<Projet*> projets;
public:
    Employe( string nom="",float s = 0.0,string r = "");
    Employe(const Employe& );
    Employe& operator=Employe(const Employe&);
    friend ostream&operator<<(ostream& ,const Employe& );
    friend istream&operator>>(istream& ,const Employe& );
    virtual ~Employe();
    void ajouterProjet();
    string rechercherProjet(string);
    void supprimerProjet();
    float setSalaire(float s){this->s=salaire;}
    string setNom(string n){this->s=nom;}
    string setRole(string r){this->r=role;}
    string getRole(){return role;}
    string getNom(){return nom;}
    virtual void calculerSalaire() = 0; // Méthode abstraite


};















