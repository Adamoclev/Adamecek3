#ifndef VESMIRNALOD_H
#define VESMIRNALOD_H
#include <iostream>
#include <string>

using namespace std;

class VesmirnaLod {
protected:
    string nazev;
    int pocetClenuPosadky;
private:
    static int pocetAktivnichLodi;
public:
    VesmirnaLod(string n, int p);
    virtual ~VesmirnaLod();
    
    static int getPocetLodi();
    int getPosadka();
    virtual void provedMisi() = 0;

    friend ostream& operator<<(ostream& os, const VesmirnaLod& v) {
        os << "[" << v.nazev << "] (Posadka: " << v.pocetClenuPosadky << " clenu)";
        return os;
    }
};
#endif