#include <iostream>
#include <stdio.h>

using namespace std;

struct asiento{
    int numeroAsiento;
    char nombrePasajero[];
    struct asiento *asientoAnterior;
    struct asiento *asientoSiguiente;
};

int main(){
    char tst[] = "TEST";
    cout << tst;
    return 0;
}
