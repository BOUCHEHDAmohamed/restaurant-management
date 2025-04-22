
class ChefSale:public ChefCuisinier{
private:
    string sales_specialises;
public:
    ChefSale(string n ="",float s = 0.0,string r = "",string spec = "",string sales = "")
    : ChefCuisinier(n,s, r, spec);
    friend ostream&operator<<(ostream& ,const ChefSale& );
    friend istream&operator>>(istream& ,const ChefSale& );
    void preparerPlatSale(Plat);
    void calculerSalaire() ;
    ~ChefSale(){};

};
