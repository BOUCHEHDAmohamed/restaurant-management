#pragma once
#include<vector>
#include<iostream>
#include<string>
#include"Employé.h"
class Gerant:virtual public Employe{
private:
    vector<Employe*> equipe;
public:
    Gerant((float s = 0.0,string r = "")
        :Employe(s, r);
    Gerant(const Gerant& ):Employe(float,string);
    void genererRapportVentes();
    void calculerSalaire(); // methode mplymorphe
    Gerant& operator=(const Gerant& );
    void ajouterEmployeParRole();
    Employe* rechercherEmploye(string );
    void modifierSalaire(string,float);
    void supprimerEmploye(string );
    friend ostream&operator<<(ostream& ,const Gerant& );
    friend istream&operator>>(istream& ,const Gerant& );
    ~Gerant();
};

