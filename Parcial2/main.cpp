#include <iostream>
#include "disparo_defen.h"
#include "disparo_ofen.h"

using namespace std;

int main()
{
    int Voo;
    cout << "Ingrese Vo desde la cual quiere probar: " << endl;
    cin >> Voo;
    doffensive Do; disparo_defen D1;
    //Do.DisparoOfensivo(Voo);
    D1.DisparoDefensivo(Voo);
    return 0;
}
