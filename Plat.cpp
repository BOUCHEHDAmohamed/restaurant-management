Plat::Plat(string nom,float prix)
{
    nom=nom;
    prix=prix;
}
Plat::~ Plat(){};
Plat::ostream&operator<<(ostream&out ,const Plat&p );
{
    out << "Nom du plat: " << p.nom << ", Prix: " << p.prix;
    return out;

}
Plat::istream&operator>>(istream&in ,const Plat&p );
{
cout << "Entrer le nom du Plat: ";
in>> p.nom;
cout << "Entrer leprix du Plat: ";
in>> p.prix;
return in;
}
void Plat:: modifierPrixPlat(string nomPlat);
{
    if(nomPlat==nom)
    {
        float nvPrix;
        cout<<"entrer le nouveau prix pour"<<nom<<":"<<endl;
        cin>nvPrix;
        prix=nvprix;
    }

}
