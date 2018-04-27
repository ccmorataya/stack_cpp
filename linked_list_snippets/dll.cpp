#include <iostream>

using namespace std;

int main()
{
    struct nodo {
        int dato;
        struct nodo* siguiente;
        struct nodo* anterior;
    };

    void Insertar(Lista * lista, int v)
    {
        pNodo nuevo, actual;

        /*  Crear un nodo nuevo */
        nuevo = (pNodo)malloc(sizeof(tipoNodo));
        nuevo->valor = v;

        /*  Colocamos actual en la primera posición de la lista */
        actual = *lista;
        if (actual)
            while (actual->anterior)
                actual = actual->anterior;

        /*  Si la lista está vacía o el primer miembro es mayor que el nuevo */
        if (!actual || actual->valor > v) {
            /*  Añadimos la lista a continuación del nuevo nodo */
            nuevo->siguiente = actual;
            nuevo->anterior = NULL;
            if (actual)
                actual->anterior = nuevo;
            if (!*lista)
                *lista = nuevo;
        } else {
            /*  Avanzamos hasta el último elemento o hasta que el siguiente tenga 
                                  *           un valor mayor que v */
            while (actual->siguiente && actual->siguiente->valor <= v)
                actual = actual->siguiente;
            /*  Insertamos el nuevo nodo después del nodo anterior */
            nuevo->siguiente = actual->siguiente;
            actual->siguiente = nuevo;
            nuevo->anterior = actual;
            if (nuevo->siguiente)
                nuevo->siguiente->anterior = nuevo;
        }
    }

    void Borrar(Lista * lista, int v)
    {
        pNodo nodo;

        /*  Buscar el nodo de valor v */
        nodo = *lista;
        while (nodo && nodo->valor < v)
            nodo = nodo->siguiente;
        while (nodo && nodo->valor > v)
            nodo = nodo->anterior;

        /*  El valor v no está en la lista */
        if (!nodo || nodo->valor != v)
            return;

        /*  Borrar el nodo */
        /*  Si lista apunta al nodo que queremos borrar, apuntar a otro */
        if (nodo == *lista)
            if (nodo->anterior)
                *lista = nodo->anterior;
            else
                *lista = nodo->siguiente;

        if (nodo->anterior) /*  no es el primer elemento */
            nodo->anterior->siguiente = nodo->siguiente;
        if (nodo->siguiente) /*  no es el último nodo */
            nodo->siguiente->anterior = nodo->anterior;
        free(nodo);
    }
    return 0;
}
