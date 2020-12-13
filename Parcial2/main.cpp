#include <iostream>
#include "disparo_defen.h"
#include "disparo_ofen.h"

using namespace std;

int main()
{
    int Voo;
    cout << "Ingrese Vo desde la cual quiere probar: " << endl;
    cin >> Voo;
    doffensive r1;
    r1.DisparoOfensivo(Voo);
    return 0;
}
