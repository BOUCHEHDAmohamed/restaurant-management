#pragma once
#include<iostream>
#include<string>
#include"chefCuisinier.h"
#include"Plat.h"
using namespace std ;

ChefCuisiner::ChefCuisiner( string n,float s,string role,string spec){
this->specialité=spec;}
ChefCuisiner::chefCuisiner(const ChefCuisinier& c):Employe(c){
    this->specialité=c.spec;
}
void chefCuisiner:: preparerPlat(Plat p) {
       cout << "Préparation d'un plat spécial " << specialité
         << " par " << nom << endl;
    }
 void chefCuisiner::calculerSalaire() {
        salaire += 500;
 }
ChefCuisiner:: ostream& operator<<(ostream& out, const ChefCuisinier& c) {
        out << static_cast<const Employe&>(c);
        out << ", Spécialité: " << c.specialite;
        return out;
    }
ChefCuisinier:: istream& operator>>(istream& in, ChefCuisinier& c) {
        in >> static_cast<Employe&>(c);
        cout << "Entrer la spécialité: ";
        in >> c.specialite;
        return in;
    }

