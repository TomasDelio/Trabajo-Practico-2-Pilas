//Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores
//o iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada,limite,mayores,menores;
    char control='s';

    inicpila(&dada);
    inicpila(&limite);
    inicpila(&mayores);
    inicpila(&menores);

    printf("Ingrese la pila limite:\n");

    do
    {
        leer(&limite);
        printf("Quiere ingresar otro elemento?? Presione S\n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(control=='s');
    printf("Ingrese la pila dada\n");

    do
    {
        leer(&dada);
        printf("Quiere ingresar otro elemento?? Presione S\n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(control='s');

    while(!pilavacia(&dada))
    {
        if(tope(&dada)>=tope(&limite))
        {
            apilar(&mayores,desapilar(&dada));
        }
        else (tope(&dada)<=tope(&limite));
        {
            apilar(&menores,desapilar(&dada));
        }
    }
    printf("\nTodas las pilas luego de hacer los pasajes correspondientes \n");
    printf("\nPila Limite: \n");
    mostrar(&limite);

    printf("\nPila mayores: \n");
    mostrar(&mayores);

    printf("\nPila Mnores: \n");
    mostrar(&menores);

    printf("\nPila dada: \n");
    mostrar(&dada);

    return 0;
}
