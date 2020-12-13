#ifndef DISPARO_DEFEN_H
#define DISPARO_DEFEN_H
#define G 9.81
#define pi 3.141617

class disparo_defen
{
    float d = 800;
    float Hd = 100;
    float Xd = d;
    float Yd = Hd;
    float d0 = 0.025*d;

public:
    disparo_defen();
};

#endif // DISPARO_DEFEN_H
