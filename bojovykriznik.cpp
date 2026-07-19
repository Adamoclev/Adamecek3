#include "BojovyKriznik.h"

using namespace std;

BojovyKriznik::BojovyKriznik(string n, int p, int d) : VesmirnaLod(n, p) {
    pocetDel = d;
}

void BojovyKriznik::provedMisi() {
    cout << "Priprava zbrani krizniku " << nazev << ". Nabijim vsech " << pocetDel << " del!\n";
}

BojovyKriznik BojovyKriznik::operator+(const BojovyKriznik& druhy) {
    string novyNazev = this->nazev + " a " + druhy.nazev;
    int novaPosadka = this->pocetClenuPosadky + druhy.pocetClenuPosadky;
    int novaDela = this->pocetDel + druhy.pocetDel + 10;
    
    return BojovyKriznik(novyNazev, novaPosadka, novaDela);
}