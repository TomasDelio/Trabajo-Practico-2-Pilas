// Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
    Pila aux1,aux2,aux3,aux4;
    char control='s';

    inicpila(&aux1);
    inicpila(&aux2);
    inicpila(&aux3);

    while(control=='s');
    do
    {
    leer(&aux1);
    printf ("Ingrese un dato para el elemento A .Si desea ingresar otro presione s: \n");
    fflush (stdin);
    scanf ("%c", &control);
    }
    while(control=='s');
    do
    {
     leer(&aux2);
    printf ("Ingrese un dato para el elemento B .Si desea ingresar otro presione s: \n");
    fflush (stdin);
    scanf ("%c", &control);
    }
    while(control=='s');
    while (!pilavacia(&aux1)&& !pilavacia(&aux2))
    {
        apilar(&aux3,desapilar(&aux1));
        apilar(&aux4,desapilar(&aux2));
    }
    if(pilavacia(&aux1)&& pilavacia(&aux2))
    {
        printf("Ambas pilas tienen la misma cantidad de elementos\n");
    }
    else if (!pilavacia(&aux1)){
        printf("La pila 1 tiene mayor cantidad de elementos");
    }
    else
    {
        printf("La pila 2 tiene mayor cantidad de elementos");
    }

    return 0;
}
