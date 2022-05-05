//Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes elementos en el mismo orden
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada,aux1,aux2;
    char control='s';

    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);

    while(control=='s');
    {
        leer(&dada);
            printf("desea ingresar otro dato: presione s :\n");
            fflush(stdin);
            scanf("%c",&control);
    }

    if (!pilavacia(&dada))
    {
        apilar(&aux1,desapilar(&dada));
    }
    while(!pilavacia(&dada))
    {
        apilar(&aux2,desapilar(&dada));
    }
    if (!pilavacia(&aux1))
    {
        apilar(&dada,desapilar(&aux1));
    }
    while(!pilavacia(&aux2))
    {
        apilar(&dada,desapilar(&aux2));
    }
    mostrar(&dada);
    return 0;
}
