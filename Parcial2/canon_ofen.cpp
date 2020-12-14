#include "canon_ofen.h"

doffensive::doffensive(int _Voo,  int _angleoo, int _Vooo, float _Hd, float _Ho, float _d)
{
    Voo = _Voo;
    angleoo = _angleoo;
    Vooo = _Vooo;
    Hd = _Hd;
    Ho = _Ho;
    Yo = Ho;
    Yd = Hd;
    d = _d;
    Xd = d;
    d0 = 0.025*d;
    d02 = 0.05*d;
}

void doffensive::DisparoOfensivo(){
    int flag = 0;
    float x,y;
    float Vxo,Vy0;
    int V0o = 0;
    int t = 0;
    int angle = 0;
    for(V0o = Voo; V0o<(Hd*4); V0o += 1){
        for(angle = 1; angle < 90; angle++){
            Vxo = V0o*cos(angle*pi/180);
            Vy0 = V0o*sin(angle*pi/180);
            x = 0.0;
            y = 0.0;
            for(t = 0;t<300 ; t++){
                x = Vxo*t;
                y = Yo + Vy0*t -(0.5*G*t*t);
                if(sqrt(pow((Xd - x),2)+pow((Yd - y),2)) < d02){
                    if(y<0) y = 0;
                    ImprimirResultados(angle, V0o, x, y, t);
                    flag += 1;
                    V0o += 1;
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


void doffensive::DisparoOfensivo2(){
    int flag = 0, flag1=0;
    float x,y,x2,y2;
    float Vxo,Vy0,Vxoo,Vyoo;
    int V0o = 0;
    int t = 0;
    int angle = 0;

    Vxoo = Vooo*cos((angleoo+90)*pi/180);
    Vyoo = Vooo*sin((angleoo+90)*pi/180);
    for(V0o = Voo; V0o<(Hd*4) ; V0o += 5){
        for(angle = 1; angle < 90; angle++){
            Vxo = V0o*cos((angle)*pi/180);
            Vy0 = V0o*sin((angle)*pi/180);
            x = 0.0;
            y = 0.0;
            x2 = 0.0;
            y2 = 0.0;
            for(t = 0;t<300 ; t++){
                x2 = Hd+Vxoo*(t+1);
                y2 = Yd + Vyoo*(t+1) -(0.5*G*(t+1)*(t+1));
                x = Vxo*t;
                y = Yo + Vy0*t -(0.5*G*t*t);
                if(sqrt(pow((x2 - x),2)+pow((y2 - y),2)) < d02){
                    if(y<0) y = 0; if(y2<0) y2 = 0;
                    if(flag1<1){
                        cout<<"Parametros disparo defensivo: "<<endl;
                        ImprimirResultados(angleoo, Vooo, x2, y2, t+1);
                        flag1=1;cout<<endl;
                        cout<<"Parametros de 3 disparos ofensivos efectivos: "<<endl;
                        ImprimirResultados(angle, V0o, x, y, t);
                        cout << "________________________________________"<<endl;
                    };
                }
                if(sqrt(pow((Xd - x),2)+pow((Yd - y),2)) < d02){
                    if(y<0) y = 0;
                    ImprimirResultados(angle, V0o, x, y, t);
                    flag += 1;
                    V0o += 10;
                    break;
                }

                if(y < 0){
                    break;
                }
            }
            if(flag == 2) break;

        }
        if(flag == 2) break;
    }
    if(flag != 2){
        cout << "No impacto en los disparos esperados"<< endl;
    }
}





void doffensive::ImprimirResultados(int angle,int V0o,float x,float y,int t)
{
    cout << "------------Parametros del impacto------------"<<endl;
    cout << "Angulo: " << angle << " grados." << endl;
    cout << "Velocidad inicial: " << V0o << " m/s." << endl;
    cout << "Coordenadas: [X: " << x << ", Y: "<< y << "]" << endl;
    cout << "Tiempo de impacto: " << t << " seg."<< endl;
    cout << endl;
}
