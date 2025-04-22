#include<vector>
#include<iostream>
#include<string>
#include"Client.h"
#include"Table.h"
class Reservation{
private:
    string date;
    string heure;
    vector<Client*>client;
    vector<Table*>tab;
public:
    Reservation(string d="",string h="");
    Reservation(Reservation const&)
    Reservation& operator=(const Reservation& );
     friend ostream&operator<<(ostream& ,const Reservation& );
    friend istream&operator>>(istream& ,const Reservation& );
    ~Reservation();
    void confirmerReserervation();
    void annulerReservation();
    void getDate(){return date;}
    void getHeure(){return heure;}
    setDate(string d){this->d=date;}
    setHeure(string h){this->h=heure;}


