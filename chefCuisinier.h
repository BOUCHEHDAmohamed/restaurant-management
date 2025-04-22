#pragma once
#include<vector>
#include<iostream>
#include<string>
#include"Employe.h"

class ChefCuisinier:virtual public Employe{
protected:
    string specialité;
public:

    ChefSucre( string nom="",float s=0.0, string r=""):Employe(n,s,r);
    ChefCuisinier(const ChefCuisinier& ): Employe();
    friend ostream&operator<<(ostream& ,const ChefCuisinier& );
    friend istream&operator>>(istream& ,const ChefCuisinier& );
    void calculerSalaire()  ;
    void preparerPlat(Plat);
    ~ChefCuisinier(){};
};
