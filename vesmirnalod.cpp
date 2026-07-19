#include "VesmirnaLod.h"

int VesmirnaLod::pocetAktivnichLodi = 0;

VesmirnaLod::VesmirnaLod(string n, int p) {
    nazev = n;
    pocetClenuPosadky = p;
    pocetAktivnichLodi++;
}

VesmirnaLod::~VesmirnaLod() {
    pocetAktivnichLodi--;
}

int VesmirnaLod::getPocetLodi() {
    return pocetAktivnichLodi;
}

int VesmirnaLod::getPosadka() {
    return pocetClenuPosadky;
}