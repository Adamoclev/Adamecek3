#ifndef TEZEBNIFREGATA_H
#define TEZEBNIFREGATA_H
#include "VesmirnaLod.h"

using namespace std;

class TezebniFregata : public VesmirnaLod {
private:
    double kapacitaNakladu;
public:
    TezebniFregata(string n, int p, double k);
    void provedMisi() override;
};
#endif