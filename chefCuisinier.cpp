#pragma once
#include<iostream>
#include<string>
#include"chefCuisinier.h"
#include"Plat.h"
using namespace std ;

ChefCuisiner::ChefCuisiner( string n,float s,string role,string spec){
this->specialit�=spec;}
ChefCuisiner::chefCuisiner(const ChefCuisinier& c):Employe(c){
    this->specialit�=c.spec;
}
void chefCuisiner:: preparerPlat(Plat p) {
       cout << "Pr�paration d'un plat sp�cial " << specialit�
         << " par " << nom << endl;
    }
 void chefCuisiner::calculerSalaire() {
        salaire += 500;
 }
ChefCuisiner:: ostream& operator<<(ostream& out, const ChefCuisinier& c) {
        out << static_cast<const Employe&>(c);
        out << ", Sp�cialit�: " << c.specialite;
        return out;
    }
ChefCuisinier:: istream& operator>>(istream& in, ChefCuisinier& c) {
        in >> static_cast<Employe&>(c);
        cout << "Entrer la sp�cialit�: ";
        in >> c.specialite;
        return in;
    }

