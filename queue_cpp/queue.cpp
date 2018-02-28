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
int emptyPosition = -1;

struct customer {
    int value;
    int ticket;
} customers[structLength];

// CM: Check if the queue is full
bool queueIsFull(){
    for (int i = 0; i <= structLength; i++){
        if (customer[i].ticket == -1){
           emptyPosition = i;
           return false;
        }
        return true;
    }
}

void emptyQueue(){
    for (int i = 0; i <= structLength; i++) {
        customer[i].ticket = -1;
        customer[i].value = -1;
    }
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
        if (!queueIsFull()){
            cout << "Ingresa el valor para el cliente " << emptyPosition << endl;
            cin << customers[emptyPosition];
        }
        else {
            cout << "Cola llena!";
        }
	}
	else if (option == 4){
	    return 0;
	}
	else{
	    cout << "Opción invalida, intenta de nuevo" << endl;
	}
    }
}
