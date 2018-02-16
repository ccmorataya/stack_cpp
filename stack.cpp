#include<iostream>

using namespace std;

void push(int number){
    cout << "push: " + number;
}

void pop(){
    cout << "call pop()";
}

void showStack(){
    cout << "call showStack()";
}

int main(){
    cout << "Simulación de pila:\n";
    cout << "Elige una opción:\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Mostrar pila\n";
    cout << "4. Salir\n";
    int option = -1;
    int number;
    cin >> option;

    if (option == 1) {
        cout << "Ingresa un número entero";
        cin >> number;
        push(number);
    }
    else if (option == 2)
        pop();
    else if (option == 3)
        showStack();
}

