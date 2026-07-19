#include <iostream>
#include <vector>
#include "BojovyKriznik.h"
#include "TezebniFregata.h"

using namespace std;

int main() {
    cout << "Pocatecni stav flotily: " << VesmirnaLod::getPocetLodi() << "\n\n";

    cout << "--- Vystavba flotily ---\n";
    BojovyKriznik* kriznik1 = new BojovyKriznik("Apollo", 50, 12);
    BojovyKriznik* kriznik2 = new BojovyKriznik("Ares", 40, 8);
    TezebniFregata* fregata1 = new TezebniFregata("Nostromo", 10, 500.5);

    vector<VesmirnaLod*> flotila;
    flotila.push_back(kriznik1);
    flotila.push_back(kriznik2);
    flotila.push_back(fregata1);

    cout << "Aktualni pocet lodi: " << VesmirnaLod::getPocetLodi() << "\n\n";

    cout << "--- Test polymorfismu (Mise) ---\n";
    for (int i = 0; i < flotila.size(); i++) {
        flotila[i]->provedMisi();
    }
    cout << "\n";

    cout << "--- Logistika ---\n";
    int celkovaPosadka = 0;
    for (int i = 0; i < flotila.size(); i++) {
        celkovaPosadka += flotila[i]->getPosadka();
    }
    cout << "Celkovy pocet lidi ve vesmiru: " << celkovaPosadka << "\n\n";

    cout << "--- Test operatoru + (Spojeni letek) ---\n";
    cout << "Vytvarim spojenou letku...\n";
    BojovyKriznik sloucenaLetka = *kriznik1 + *kriznik2;
    cout << "Sloucena letka: " << sloucenaLetka << "\n";
    sloucenaLetka.provedMisi();
    cout << "\n";

    cout << "--- Uklid vesmirneho prachu ---\n";
    for (int i = 0; i < flotila.size(); i++) {
        delete flotila[i];
    }
    flotila.clear();

    cout << "Flotila znicena. Zbyva lodi: " << VesmirnaLod::getPocetLodi() << "\n";

    return 0;
}