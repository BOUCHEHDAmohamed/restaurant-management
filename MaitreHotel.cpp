#include<iostream>
#include"MaitreHote.h"
#include<string>
using namespace std;
MaitreHotel::MaitreHotel(string n,float s,string r,int table,string spec)
    :Serveur(n,s,table),ChefCuisinier(n,s,spec){};

MaitreHotel::~MaitreHotel(){
for(int i=0;i<tablesResponsables.size();i++)
{
    delete tablesResponsables[i];
}
tablesResponsables.clear();
}
MaitreHotel::MaitreHotel(MaitreHotel const& m)
{

}
void MaitreHotel::organiserService() {
    cout << "Organisation du service pour "
              << tablesResponsables.size() << " tables\n";
}
void MaitreHotel::calculerSalaire(){
    // 300 comme un salaire be base
    Serveur::salaire +=300 tablesResponsables.size() * 20; // Bonus par table
}

void MaitreHotel::afficherTables() const {
    cout << "Tables gérées :\n";
    for (const auto& table : tablesResponsables) {
        cout << "- Table " << table->getNumero()
                  << " (" << table->getCapacite() << "\n";
    }
}
void MaitreHotel::afficher() const {
   cout << "Maître d'hôtel " << nom
              << "\nTables: " << tablesResponsables.size()
              << "\nSalaire: " << salaire << "DT\n";
}
void MaitreHotel::ajouterTable(Table t) {
    Table* t1=new Table(t);
    if(rechercherTable(t1->getNumTable()!=-1))
    {
        cout<<"la table deja existe"<<endl;

    }else{
    tablesResponsables.push_back(t1);}
}
void MaitreHotel::supprimerTable(int numTable)
{
    if(rechercherTable()!=-1)
    {
        tablesResponsables.erase(tablesResponsables.begin()+rechercherTable(numTable));
        cout<<endl<<"la  nouvelle table est:";
        this->ostream&operator<<(ostream& out, const MaitreHotel& M);
    }
}
void MaitreHotel::rechercherTable(int numTable)
{
    int a=-1;
    for(int i=O;itablesResponsables.size();i++)
    {
        if (plat[i]->getNumTable()==numTable){
            a=i;
        }
    }
    return a;

}
friend MaitreHotel::ostream& operator<<(ostream& out, const MaitreHotel& m) {
    out << "  MAÎTRE D'HÔTEL \n"
       << "Nom : " << m.Serveur::getNom() << "\n"
       << "Spécialité : " << m.specialite << "\n"
       << "Table attitrée : " << *m.table_gerees << "\n
       out << "Tables responsables : " << m.tablesResponsables.size() << "\n"
       /*   IDK
       for (int i=0;i<m.tablesResponsables.size();i++) {
            out << "- " << *m.tables_responsables[i]<< endl;} */
            /*  for (int i=0;i<m.tables_gerees.size();i++) {
        out << "- " << *m.tables_gerees[i]<< endl;} */
    }
       << "Salaire : " << m.Serveur::salaire << "dt\n";
    return out;
}
friend MaitreHotel::istream& operator>>(istream& in, MaitreHotel& m) {
   cout << "Entrez le nom : ";
    string nom;
    in >> nom;
    m.Serveur::nom = nom;
    m.ChefCuisinier::nom = nom;
    cout << "Entrez la spécialité : ";
    in >> m.specialite;
    cout << "Entrez le numéro de table : ";
    in >> *m.table_geress;
    return in;
}
