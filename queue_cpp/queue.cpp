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

struct customer {
    int value;
    int ticket;
} customers[structLength];

// CM: Check if the queue is full
bool fullQueue(){
    return false;
}

// CM: Check if the queue is empty
bool emptyQueue(){
    return false;
}

int main()
{
    int option = -1;
    while (true) {
        cout << "=========================================" << endl;
        cout << "\tMenú principal" << endl;
        cout << "=========================================" << endl;
        cout << "Elige una opción:" << endl;
        cout << "1. Ingresar un cliente" << endl;
        cout << "2. Atender a cliente" << endl;
        cout << "3. Mostrar cola" << endl;
        cout << "4. Salir" << endl;
	cout << "Opción: ";
	cin >> option;

	if (option == 1){
	}
	else if (option == 4){
	    return 0;
	}
	else{
	    cout << "Opción invalida, intenta de nuevo" << endl;
	}
    }
}
