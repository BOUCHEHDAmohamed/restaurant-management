#include<iostream>
#include<string>
using namespace std;

class Facture {
private:
    int numero;
    float montant_total;

public:
    Facture(int numero = 0, float montant_total = 0.0);
    ~Facture();
    void genererFacture();
    int getNumero() {return numero};
    float getMontantTotal() {return montant_total};
    void setMontantTotal(float montant){montant_total=montant};
    friend ostream&operator<<(ostream& ,const Fcature& );
    friend istream&operator>>(istream& ,const Facture& );

};
