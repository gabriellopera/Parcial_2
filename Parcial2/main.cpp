#include "canon_defen.h"
#include "canon_ofen.h"

int main()
{
    int Voo, A;
    cout << "Ingrese Vo desde la cual quiere probar: " << endl;
    cin >> Voo; cout<<endl;

    cout<<"1. Generar disparos (al menos tres) ofensivos que comprometan la integridad del canon defensivo"<<endl;
    cout<<"2. Generar disparos (al menos tres) defensivos que comprometan la integridad del canon ofensivo"<<endl;
    cout<<"3. Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el canon defensivo sea destruido sin importar si el canon ofensivo pueda ser destruido"<<endl;
    cout<<"4. Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los canones defensivo y ofensivo puedan ser destruidos"<<endl;
    cout<<"5. Dado un disparo ofensivo efectivo y un disparo defensivo que comprometa la efectividad del ataque ofensivo, generar (al menos tres) disparos que neutralicen el ataque defensivo y permitan que el ataque ofensivo sea efectivo. "<<endl;cout<<endl;
    cout<<"Elija una opcion: ";
    cin>>A;cout<<endl;

    switch(A){
        case 1:{
            doffensive D0 = doffensive(Voo);
            D0.DisparoOfensivo();

        }
            break;
        case 2:{
            ddefensive D1 = ddefensive(Voo,0,0);
            D1.DisparoDefensivo();
        }
            break;
        case 3:{
            ddefensive D2 = ddefensive(Voo,46,100);
            D2.DisparoDefensivo2();

        }
            break;
        case 4:{
            ddefensive D3 = ddefensive(Voo,40,120);
            D3.DisparoDefensivo2();

        }
            break;
        case 5:{

        }
            break;
    }

    return 0;
}
