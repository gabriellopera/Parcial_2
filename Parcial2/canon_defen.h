#ifndef DISPARO_DEFEN_H
#define DISPARO_DEFEN_H
#include <iostream>
#include <math.h>
#define G 9.81
#define pi 3.141617

using namespace std;

class ddefensive
{

private:
    float d = 800;
    float Hd = 100;
    float Xd = d;
    float Yd = Hd;
    float d0 = 0.025*d;
    int Voo;
    float Ho = 200;
    float Xo = 0;
    float Yo = Ho;
    float d02 = 0.05*d;

public:
    ddefensive(int);
    void DisparoDefensivo();
    void ImprimirResultados(int angle,int V0o,float x,float y,int t);
};

#endif // DISPARO_DEFEN_H
