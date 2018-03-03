#include <stdio.h>

int elevarAlCubo(int);

int main(){
    int Numero = 5;

    printf("El valor Original del numero es %d\n", Numero);
    Numero = elevarAlCubo(Numero);
    printf("El nuevo valor de Cubo es %d\n", Numero);

    return 0;
}

int elevarAlCubo(int n){
    return n * n * n;
}
