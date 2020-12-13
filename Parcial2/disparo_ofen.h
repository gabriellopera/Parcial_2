#ifndef DOFFENSIVE_H
#define DOFFENSIVE_H
#include <iostream>
#include <math.h>
#define G 9.81
#define pi 3.141617

using namespace std;

class doffensive
{

private:
    float d = 800;
    float Ho = 200;
    float Xo = 0;
    float Yo = Ho;
    float d0 = 0.05*d;
    int Voo;
    float Hd = 100;
    float Xd = d;
    float Yd = Hd;
    float d02 = 0.025*d;

public:
    doffensive(int);
    void DisparoOfensivo();
    void ImprimirResultados(int angle,int V0o,float x,float y,int t);
};

#endif // DOFFENSIVE_H
