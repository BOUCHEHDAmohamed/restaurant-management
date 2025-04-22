#include<iostream>
#include<string>
using namespace std;

class Table{
private:
    int num_tb;
    int capacite;
    bool estReserve;
public:
    Table(int num_tb=0,int capacité=0,bool estReserve=false);
    ~Table();
    void reserver();
    void liberer();
    void getNumTable(){return num_tb;}
    void getCapacite(){return capacite;}
    void setNumTable(int num){this->num=numTable;}
    void setCapacite(int cap){this->cap=capacite;}
    friend ostream&operator<<(ostream& ,const Table& );
    friend istream&operator>>(istream& ,const Table& );

};
