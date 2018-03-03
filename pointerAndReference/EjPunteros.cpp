#include <stdio.h>

int main(){
    int Variable;
    int *ptrVariable;

    Variable = 7;
    ptrVariable = &Variable;

    printf("La direccion de la Variable es %p\n"
            "El valor de direccion del apuntador ptrVariable es %p\n\n", &Variable, ptrVariable);

    printf("El valor de la Variable es %d\n"
            "El valor del apuntador ptrVariable es %d\n\n", Variable, *ptrVariable);

    printf("Probando que * y & son complementos "
            "uno de otro.\n&*ptrVariable = %p\n*&ptrVariable = %p\n",
            &*ptrVariable, *&ptrVariable);

    return 0;
}
