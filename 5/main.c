//Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA contenga los elementos cargados originalmente en ella, pero en orden inverso.
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada,dadafalsa;

    inicpila(&dada);
    inicpila(&dadafalsa);
    int cantdelelementos;
    printf("Cuantos valores desea ingresar? \n");
    scanf("%d",&cantdelelementos);

    for (int i=1;i<=cantdelelementos; i++)
    {
        leer(&dadafalsa);
    }
    do
    {
        apilar(&dada,desapilar(&dadafalsa));
    }
    while((!pilavacia(&dadafalsa)));
    printf("\n\n Pila Dada: \n");
    mostrar(&dada);

    return 0;
}
