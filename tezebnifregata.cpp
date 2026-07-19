#include "TezebniFregata.h"

using namespace std;

TezebniFregata::TezebniFregata(string n, int p, double k) : VesmirnaLod(n, p) {
    kapacitaNakladu = k;
}

void TezebniFregata::provedMisi() {
    cout << "Fregata " << nazev << " spousti tezbu. Cekam na naplneni " << kapacitaNakladu << " tun rudy.\n";
}