#include<iostream>
#include<string>
#include"Table.h"
using namespace std;

Table::Table(int num_tb,int capacite,bool estReserve)
{
    this->num_tb=num_tb;
    this->capacite=capacite;
    this->estReserve==false;
}
Table::~Table(){};
void Table::estReserve(){
estReserve=true;

}
void Table::liberer(){

estReserve=false;}

Table::ostream&operator<<(ostream& out ,const Table& t );
{
    out << "le numero de la table est: " << t.num_tb << ", capacite: " << t.capacite;
    return out;

}
Table::istream&operator>>(istream& in ,const Table& t );
{
cout << "Entrer le numéro de table: ";
in>> t.num_tb;
cout << "Entrer la capacite de table: ";
in>> t.capacite;
return in;
}
