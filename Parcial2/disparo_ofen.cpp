#include "disparo_ofen.h"

//doffensive::doffensive()
//{

//}

void doffensive::DisparoOfensivo(int Voo){
    int flag = 0;
    float x,y;
    float Vxo,Vy0;
    int V0o = 0;
    int t = 0;
    int angle = 0;
    for(V0o = Voo; ; V0o += 5){
        for(angle = 0; angle < 90; angle++){
            Vxo = V0o*cos(angle*pi/180);
            Vy0 = V0o*sin(angle*pi/180);
            x = 0.0;
            y = 0.0;
            for(t = 0; ; t++){
                x = Vxo*t;
                y = Yo + Vy0*t -(0.5*G*t*t);
                if(sqrt(pow((Xd - x),2)+pow((Yd - y),2)) < d0){
                    if(y<0) y = 0;
                    ImprimirResultados(angle, V0o, x, y, t);
                    flag += 1;
                    V0o += 50;
                    break;
                }
                if(y < 0){
                    break;
                }
            }
            if(flag == 3) break;

        }
        if(flag == 3) break;
    }
    if(flag != 3){
        cout << "No impacto en los disparos esperados"<< endl;
    }
}

void doffensive::ImprimirResultados(int angle,int V0o,float x,float y,int t)
{
    cout << "Impacto con un angulo de " << angle << " grados" << endl;
    cout << "Impacto con velocidad incial " << V0o << endl;
    cout << "Impacto con posicion x: " << x << endl;
    cout << "Impacto con posicion y: " << y << endl;
    cout << "Con tiempo: " << t << endl;
    cout << endl;
}
