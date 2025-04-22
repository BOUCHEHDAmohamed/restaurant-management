class ChefSucre:public chefCuisinier{
private:
    string:desserts_specialises;
public:
    ChefSucrer(float s = 0.0,string r = "",string spec = "",string desserts = "", Employe* sup=nullptr)
    : ChefCuisinier(s, r, spec, sup);
    friend ostream&operator<<(ostream& ,const ChefSucre& );
    friend istream&operator>>(istream& ,const ChefSucre& );
    void preparerDesserts(Plat );
    void calculerSalaire() override;
    ~ChefSucre(){};

};
