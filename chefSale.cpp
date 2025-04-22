
ChefSale::chefSale(float s =,string r,string spec,string sales, Employe* sup)
    : ChefCuisinier(s, r, spec, sup){
sales_specialises=sales;
}
void chefSucre::preparerPlatsale(Plat sl){
cout<<"preparation du salé:"<<endl;
cout<<sl;

}
void chefSucre::calculerSalaire(){
salaire=2250.Of;}

ostream& operator<<(ostream& out,const chefSale& chsl){
    out<<chsl.sales_specialises<<endl;
    return out;}

 istream& operator>>( istream& in,const chefSale& chsl){
in>>chsl.sales_specialises;
return in;}
chefSale::~chefSale(){};
