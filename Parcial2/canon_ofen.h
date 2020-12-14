#ifndef CANON_OFEN_H
#define CANON_OFEN_H
#include <iostream>
#include <math.h>
#define G 9.81
#define pi 3.141617

using namespace std;

class doffensive
{

private:
    float d = 1000;
    float Ho;
    float Xo = 0;
    float Yo;
    float d0 = 0.05*d;
    int Voo, angleoo, Vooo;
    float Hd;
    float Xd = d;
    float Yd;
    float d02 = 0.025*d;

public:
    doffensive(int, int, int, float, float);
    void DisparoOfensivo();
    void DisparoOfensivo2();
    void ImprimirResultados(int angle,int V0o,float x,float y,int t);
};

#endif // DOFFENSIVE_H
