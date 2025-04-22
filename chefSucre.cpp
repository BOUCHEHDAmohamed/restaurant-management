ChefSucre::chefSucre(string n,float s ,string r,string spec,string desserts)
    : ChefCuisinier(n,s, r, spec);{
desserts_specialises=desserts;
}
void chefSucre::preparerPlatsucre(Plat d){
cout<<"preparation du dessert:"<<d<<endl;
}
void chefSucre::calculerSalaire(){
salaire=2250.Of;}
chefSucre:: ostream& operator<<(ostream& out,const chefSucre& chs){
    out<<chs.desserts_specialises<<endl;
    return out;}

ChefSucre:: istream& operator>>( istream& in,const chefSucre& chs){
in>>chs.desserts_specialises
return in;}
chefSucre::~chefSucre(){};

