//  Cristian Baudilio Morataya Arriola
//  5990-11-3777
//  Programación 3
//  Sección "C"
//  Año 2018
//  Universidad Mariano Gálvez de Guatemala
//  Sede Chinautla

#include <iostream>

using namespace std;

const int stackLength = 14;

int stack[stackLength];
int index = 0;

bool stackIsFull()
{
    if (index >= stackLength)
        return true;
    else
        return false;
}

void push(int number)
{
    stack[index] = number;
    index++;
    cout << "/////////////////////////////////////////" << endl;
    cout << "\tIngresado el número " << number << endl;
    cout << "/////////////////////////////////////////" << endl;
}

void pop()
{
    if (index > 0) {
        cout << "/////////////////////////////////////////" << endl;
        cout << "\tRetirado el elemento " << stack[index - 1] << endl;
        cout << "/////////////////////////////////////////" << endl;
        index--;
    }
    else{
        cout << "*****************************************" << endl;
        cout << "   !!! NO HAY ELEMENTOS A RETIRAR !!!" << endl;
        cout << "*****************************************" << endl;
    }
}

void showStack()
{
    if (index == 0) {
        cout << "*****************************************" << endl;
        cout << "\t !!! PILA VACIA !!!" << endl;
        cout << "*****************************************" << endl;
    } else {
        cout << endl
             << "Inspección de la pila" << endl
             << endl;
        cout << "|---------------------------------------|" << endl;
        for (int i = index - 1; i >= 0; i--) {
            cout << "|\tElemento " << i << " de la pila: " << stack[i] << "\t|" << endl;
            cout << "|---------------------------------------|" << endl;
        }
    }
}

int main()
{
    bool desa = false;

    if (!desa) {
        while (true) {
            cout << endl
                 << "Simulación de pila:\n"
                 << endl;
            cout << "Elige una opción:" << endl;
            cout << "1. Push" << endl;
            cout << "2. Pop" << endl;
            cout << "3. Mostrar pila" << endl;
            cout << "4. Salir" << endl
                 << endl;
            int option = -1;
            int number;
            cout << "Opcion: ";
            cin >> option;

            if (option == 1) {
                if (!stackIsFull()) {
                    cout << "Ingresa un número entero" << endl;
                    cin >> number;
                    push(number);
                }
                else {
                    cout << "*****************************************" << endl;
                    cout << "\t !!! PILA LLENA !!!" << endl;
                    cout << "*****************************************" << endl;
                }
            } else if (option == 2)
                pop();
            else if (option == 3)
                showStack();
            else if (option == 4)
                return 0;
            else
                cout << "Opción invalida, intenta de nuevo.";
        }
    } else {
        cout << (index);
    }
}
