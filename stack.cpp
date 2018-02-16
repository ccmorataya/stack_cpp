#include <iostream>

using namespace std;

int stack[14];
int index = 0;

bool stackIsFull()
{
    if (index == 14)
        return true;
    else
        return false;
}

void push(int number)
{
    stack[index] = number;
    index++;
    cout << "Ingresado el número " << number << endl;
}

void pop()
{
    cout << "call pop()" << endl;
}

void showStack()
{
    cout << "call showStack()" << endl;
}

int main()
{
    bool desa = false;

    if (!desa) {
        while (true) {
            cout << "Simulación de pila:\n"
                 << endl;
            cout << "Elige una opción:" << endl;
            cout << "1. Push" << endl;
            cout << "2. Pop" << endl;
            cout << "3. Mostrar pila" << endl;
            cout << "4. Salir" << endl;
            int option = -1;
            int number;
            cin >> option;

            if (option == 1) {
                if (!stackIsFull()) {
                    cout << "Ingresa un número entero" << endl;
                    cin >> number;
                    push(number);
                }
            } else if (option == 2)
                pop();
            else if (option == 3)
                showStack();
            else if (option == 4)
                return 0;
        }
    } else {
        cout << (index);
    }
}
