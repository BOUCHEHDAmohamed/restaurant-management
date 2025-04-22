Reservation::Reservation(string d, string h)
{
this->date=d;
this->heure=h;
 /*char rep;
    do{Client *cl=new Client();
    cl->istream&operator>>(istream&in ,const Client& );
    client.push_back(cl);
    cout<<"voulez vous rajouter?"<<endl;
    }while(rep=="o"|| rep=="O")

    do{Table *t=new Table();
    t->istream&operator>>(istream&in ,const Table& );
    tab.push_back(t);
    cout<<"voulez vous rajouter?"<<endl;
    }while(rep=="o"|| rep=="O") */
}
Reservation::Reservation(const Reservation& r )
{
    this->date=r.date;
    this->heure=r.heure;
    for(int i=0:i<tab.size();i++){
        tab* t=new tab(*r.tab[i]);
        tab.push_back(t);)
    }
    for(int i=0:i<client.size();i++){
        client* cl=new client(*r.client[i]);
        client.push_back(cl);
    }
}
Reservation()::~Reservation(){
for(int i=0;i<tab.size();i++)
    {
        delete tab[i];
    }
    tab.clear();
    for(int i=0;i<client.size();i++)
    {
        delete client[i];
    }
    client.clear();
}

void Reservation::confirmerReservation(){
cout<<"Réservation confirmée pour le " << date << " à " << heure << "." << endl;
for(int i=0;i<tab.size();i++)
{
    t->reserver();
}

}
void Reservation::annulerReservation()
{ cout << "Réservation annulée." << endl;
for(int i=0;i<tab.size();i++)
{
    t->liberer();
}

}
friend Reservation::ostream& operator<<(ostream& out, const Reservation& r) {
    out << "Date: " << r.date << "\nHeure: " << r.heure << "\n";
    out << "Nombre de clients: " << r.client.size() << "\n";
    out << "Tables réservées: " << r.tab.size() << "\n";
    return out;

}
istream& operator>>(istream& in, Reservation& r) {
    cout << "Entrez la date de réservation: ";
    in >> r.date;
    cout << "Entrez l'heure de réservation: ";
    in >> r.heure;
    return in;
}
Reservation::operator=(const Reservation& r )
{
 if (this != &r) {
        this->date = r.date;
        this->heure = r.heure;
        this->client = r.client;
        this->tab = r.tab;
    for(int i=0;i<tab.size();i++)
    {
        delete tab[i];
    }
    tab.clear();
    for(int i=0;i<client.size();i++)
    {
        delete client[i];
    }
    client.clear();
    }
    return *this;
}
