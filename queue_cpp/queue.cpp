//  Cristian Baudilio Morataya Arriola
//  //  5990-11-3777
//  //  Programación 3
//  //  Sección "C"
//  //  Año 2018
//  //  Universidad Mariano Gálvez de Guatemala
//  //  Sede Chinautla

#include <iostream>

using namespace std;

const int structLength = 14;

struct customer{
    int value;
    int ticket;
} customers[structLength];

int main(){
    cout << "=========================================" << endl;
    cout << "\tMenú principal" << endl;
    cout << "=========================================" << endl;
    cout << "Elige una opción:" << endl;
    cout << "1. Ingresar un cliente" << endl;
    cout << "2. Atender a cliente" << endl;
    cout << "3. Mostrar cola" << endl;
    cout << "4. Salir" << endl;
}
