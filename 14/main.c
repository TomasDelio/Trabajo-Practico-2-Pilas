//Determinar si la cantidad de elementos de la pila DADA es par. Si es par,
//pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR. (NO contar los elementos)
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada,aux,impar,par;

    inicpila(&dada);
    inicpila(&aux);
    inicpila(&impar);
    inicpila(&par);

    printf("\n Ingrese dada \n");
    leer(&dada);

    while(!pilavacia(&dada))
    {
        apilar(&aux, desapilar(&dada));

    if(pilavacia(&dada))
    {
        printf("La pila dada es impar \n");
        apilar(&impar,desapilar(&aux));
    }
    else
    {
        apilar(&aux, desapilar(&dada));
        if(pilavacia(&dada))
        {
            printf("La pila dada es par\n");
            apilar(&par,desapilar(&aux));
        }
    }
    }

        return 0;
}
