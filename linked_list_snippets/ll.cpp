#include <iostream>

using namespace std;

int main()
{
    struct ejNodo {
        int numData;
        struct ejNodo* ptrSig;
    };

    struct ejNodo *ptrInicio, *ptrNuevo, *ptrRecorrido;

    ptrNuevo = malloc(sizeof(struct ejNodo));

    ptrNuevo->numData = 3;
    ptrNuevo->ptrSig = NULL;

   //Insertar al final
   ptrRecorrido = ptrInicio;

   while(ptrRecorrido->ptrSig != NULL)
   {
       if (ptrRecorrido->ptrSig != NULL)
           ptrRecorrido = ptrRecorrido->ptrSig;
   }

   ptrRecorrido->ptrSig = ptrNuevo;
   //Fin Insertar al final

   //Insertar al inicio
   ptrNuevo->ptrSig = ptrInicio;
   ptrInicio = ptrNuevo;
   //Fin insertar al inicio
}
