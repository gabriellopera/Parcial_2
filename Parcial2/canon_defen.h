#ifndef CANON_DEFEN_H
#define CANON_DEFEN_H
#include <iostream>
#include <math.h>
#define G 9.81
#define pi 3.141617

using namespace std;

class ddefensive
{

private:
    float d;
    float Hd;
    float Xd;
    float Yd;
    float d0;
    int Voo, angleoo, Vooo;
    float Ho;
    float Xo = 0;
    float Yo;
    float d02;

public:
    ddefensive(int,int,int,float,float,float);
    void DisparoDefensivo();
    void DisparoDefensivo2();
    void DisparoDefensivo3();
    void ImprimirResultados(int angle,int V0o,float x,float y,int t);
};

#endif // DISPARO_DEFEN_H
