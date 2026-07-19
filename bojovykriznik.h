#ifndef BOJOVYKRIZNIK_H
#define BOJOVYKRIZNIK_H
#include "vesmirnalod.h"

using namespace std;

class BojovyKriznik : public VesmirnaLod {
private:
    int pocetDel;
public:
    BojovyKriznik(string n, int p, int d);
    void provedMisi() override;
    BojovyKriznik operator+(const BojovyKriznik& druhy);
};
#endif