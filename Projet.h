#include<iostream>
#include<string>
class Projet{
private:
    string nom;
public:
    Projet(string nom="");
    ~Projet();
    string getNomProjet(){return nom;}


};
