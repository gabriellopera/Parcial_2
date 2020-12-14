#include "canon_defen.h"

ddefensive::ddefensive(int _Voo, int _angleoo, int _Vooo, float _Hd, float _Ho, float _d)
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



void ddefensive::DisparoDefensivo(){
    int flag = 0;
    float x,y;
    float Vxo,Vy0;
    int V0o = 0;
    int t = 0;
    int angle = 0;
    for(V0o = Voo; ; V0o += 5){
        for(angle = 1; angle < 90; angle++){
            Vxo = V0o*cos((angle+90)*pi/180);
            Vy0 = V0o*sin((angle+90)*pi/180);
            x = 0.0;
            y = 0.0;
            for(t = 0; ; t++){
                x = Vxo*t;
                y = Yd + Vy0*t -(0.5*G*t*t);
                if(sqrt(pow((Xo - x),2)+pow((Yo - y),2)) < d0){
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
            if(flag == 3) break;

        }
        if(flag == 3) break;
    }
    if(flag != 3){
        cout << "No impacto en los disparos esperados"<< endl;
    }
}

void ddefensive::DisparoDefensivo2(){
    int flag = 0, flag1 = 0;
    float x,y,x2,y2;
    float Vxo,Vy0, Vxoo,Vyoo;
    int V0o = 0;
    int t = 0;
    int angle = 0;

    Vxoo = Vooo*cos((angleoo)*pi/180);
    Vyoo = Vooo*sin((angleoo)*pi/180);
    for(V0o = Voo; ; V0o += 5){
        for(angle = 1; angle < 90; angle++){
            Vxo = V0o*cos((angle+90)*pi/180);
            Vy0 = V0o*sin((angle+90)*pi/180);
            x = 0.0;
            y = 0.0;
            x2 = 0.0;
            y2 = 0.0;
            for(t = 0; ; t++){
                x2 = Vxoo*(t+2);
                y2 = Yo + Vyoo*(t+2) -(0.5*G*(t+2)*(t+2));
                x = Xd+Vxo*t;
                y = Yd + Vy0*t -(0.5*G*t*t);
                if(sqrt(pow((x2 - x),2)+pow((y2 - y),2)) < d0){
                    if(y<0) y = 0;
                    if(flag1<1){
                        cout<<"Parametros disparo ofensivo: "<<endl;
                        ImprimirResultados(angleoo,Vooo,x2,y2,t+2);
                        flag1 = 1; cout<<endl;
                        cout<<"Parametros de 3 disparos defensivos sin importar que afecte al ofensivo o no: "<<endl;
                        ImprimirResultados(angle, V0o, x, y, t);
                        cout << "________________________________________"<<endl;
                    };

                }
                if(sqrt(pow((Xo - x),2)+pow((Yo - y),2)) < d0){
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


void ddefensive::DisparoDefensivo3(){
    int flag = 0, flag1 = 0;
    float x,y,x2,y2;
    float Vxo,Vy0, Vxoo,Vyoo;
    int V0o = 0;
    int t = 0;
    int angle = 0;

    Vxoo = Vooo*cos((angleoo)*pi/180);
    Vyoo = Vooo*sin((angleoo)*pi/180);
    for(V0o = Voo; ; V0o += 5){
        for(angle = 1; angle < 90; angle++){
            Vxo = V0o*cos((angle+90)*pi/180);
            Vy0 = V0o*sin((angle+90)*pi/180);
            x = 0.0;
            y = 0.0;
            x2 = 0.0;
            y2 = 0.0;
            for(t = 0; ; t++){
                x2 = Vxoo*(t+2);
                y2 = Yo + Vyoo*(t+2) -(0.5*G*(t+2)*(t+2));
                x = Xd+Vxo*t;
                y = Yd + Vy0*t -(0.5*G*t*t);
                if(sqrt(pow((x2 - x),2)+pow((y2 - y),2)) < d0){
                    if(y<0) y = 0;
                    if(flag1<1){
                        cout<<"Parametros disparo ofensivo: "<<endl;
                        ImprimirResultados(angleoo,Vooo,x2,y2,t+2);
                        flag1 = 1; cout<<endl;
                        cout<<"Parametros de 3 disparos defensivos para evitar destruccion tanto del ofensivo como del defensivo: "<<endl;
                    };
                    cout << "________________________________________"<<endl;
                    ImprimirResultados(angle, V0o, x, y, t);

                    flag += 1;
                    V0o += 10;


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







void ddefensive::ImprimirResultados(int angle,int V0o,float x,float y,int t)
{
    cout << "------------Parametros del impacto------------"<<endl;
    cout << "Angulo: " << angle << " grados." << endl;
    cout << "Velocidad inicial: " << V0o << " m/s." << endl;
    cout << "Coordenadas: [X: " << x << ", Y: "<< y << "]" << endl;
    cout << "Tiempo de impacto: " << t << " seg."<< endl;
    cout << endl;
}
