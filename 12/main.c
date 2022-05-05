//Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los elementos que existan en MODELO.

#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila modelo,dada,aux1,aux2,iguales;
    char control='s';

    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);
    inicpila(&iguales);

    while(control=='s')
    {
        leer(&dada);
        printf("Quiere ingresar otro elemento?? Precione S\n");
        fflush(stdin);
        scanf("%c", &control);
    }
    printf("La pila dada es :\n");
    mostrar(&dada);

    control='s';
    while (control=='s')
    {
        leer(&modelo);
        printf("Quiere ingresar otro elemento?? Precione S\n");
        fflush(stdin);
        scanf("%c", &control);
    }
    printf("La pila modelo es :\n");
    mostrar(&modelo);

    while(!pilavacia(&modelo))
    {
        while(!pilavacia(&dada))
        {
            if(tope(&dada)==tope(&modelo))
            {
                apilar(&iguales,desapilar(&dada));
            }
            else
            {
                apilar(&aux1,desapilar(&dada));
            }
        }
        apilar(&aux2,desapilar(&modelo));
        while(!pilavacia(&aux1))
        {
            apilar(&dada,desapilar(&aux1));
        }
    }
    printf("La nueva pila dada es :\n");
    mostrar(&dada);

    return 0;
}
