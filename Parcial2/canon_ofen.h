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
    float d;
    float Ho;
    float Xo = 0;
    float Yo;
    float d0;
    int Voo, angleoo, Vooo;
    float Hd;
    float Xd;
    float Yd;
    float d02;

public:
    doffensive(int, int, int, float, float, float);
    void DisparoOfensivo();
    void DisparoOfensivo2();
    void ImprimirResultados(int angle,int V0o,float x,float y,int t);
};

#endif // DOFFENSIVE_H
