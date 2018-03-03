#include <stdio.h>

void elevarAlCubo(int *);

int main() {
    int Numero = 5;

    printf("El valor Original del numero es %d\n", Numero);
    elevarAlCubo(&Numero);
    printf("El nuevo valor de cubo es %d\n", Numero);

    return 0;
}

void elevarAlCubo(int *ptrNumero){
    *ptrNumero = *ptrNumero * *ptrNumero * *ptrNumero;
}
