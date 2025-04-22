class Plat{
   private: string nom;
    float prix;
    public:
    Plat(nom="",float=0.0);
    ~Plat();
    friend ostream&operator<<(ostream& ,const Plat& );
    friend istream&operator>>(istream& ,const Plat& );
    void modifierPrixPlat(string);
    getNom(){return nom;}
    getprix(){return prix;}
    setNom(string nom){this->nom=nom;}
    setPrix()///////// }


};
