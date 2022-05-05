// Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada,distintos,aux1;
    char seguir;
    inicpila(&dada);
    inicpila(&distintos);

    do
    {
        leer(&dada);
        printf("Desea ingresar otro numero ?? Presione 's': \n");
        fflush(stdin);
        scanf("%c",&seguir);
    }
    while (seguir=='s');
    printf("Pila dada: \n");
    mostrar(&dada);

    while(!pilavacia(&dada))
    {
        if(tope(&dada)!=8)
        {
            apilar(&distintos, desapilar(&dada));
        }
        else
        {
            apilar(&aux1,desapilar(&dada));
        }
    }
    while(!pilavacia(&aux1))
    {
        apilar(&dada,desapilar(&aux1));
    }
    printf("Pila distintos: \n");
    mostrar(&distintos);

    return 0;
}
