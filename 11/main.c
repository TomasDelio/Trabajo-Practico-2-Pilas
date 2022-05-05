//Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
    Pila modelo,dada,aux,aux2;
    char control='s';

    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux);

    printf("Pila modelo \n");

    do
    {

        leer(&modelo);
        printf("Quiere ingresar otro valor?? Presione S \n");
        fflush(stdin);
        scanf("%c",&control);
    }
    while(control=='s');
    printf("Pila dada\n");
    do
    {
        leer(&dada);
        printf("Quiere ingresar otro valor?? Presione S\n");
        fflush(stdin);
        scanf("%c",&control);
    }
    while(control=='s');

    while(!pilavacia(&dada))
    {
    if(tope(&dada)== tope(&modelo))
    {
        apilar(&aux2,desapilar(&dada));
    }
    else
    {
        apilar(&aux,desapilar(&dada));
    }
    }
    while (!pilavacia(&aux))
    {
        apilar(&dada,desapilar(&aux));
    }
    printf("Pila dada es \n");

    mostrar(&dada);

    return 0;
}
