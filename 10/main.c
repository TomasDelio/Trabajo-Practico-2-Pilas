//Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales (en cantidad de elementos, valores que contienen y posición de los mismos). Mostrar por pantalla el resultado.
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila a,b,aux;
    char control='s';
    int elementosA=0,elementosB=0;

    inicpila(&a);
    inicpila(&b);
    inicpila(&aux);

    printf("Pila A\n");

    do
    {
        leer(&a);
        elementosA++;
        printf("Quiere ingresar un nuevo valor? Presione S: \n");
        fflush(stdin);
        scanf("%c",&control);
    }

    while(control=='s');
    printf("pila B\n");
    do
    {
        leer(&b);
        elementosB++;
        printf("Quiere ingresar un nuevo valor?? Presione S: \n");
        fflush(stdin);
        scanf("%c",&control);
    }
    while(control=='s');
    mostrar(&a);
    mostrar(&b);

    if(elementosA==elementosB)
    {
        printf("Los valores son iguales \n");
    }
    else
    {
        printf("Los valores no son iguales \n");
    }
    while(!pilavacia(&a)&&!pilavacia(&b)&&tope(&a)==tope(&b))
    {
        apilar(&aux,desapilar(&a));
        apilar(&aux,desapilar(&b));
    }
    if (pilavacia(&a)&pilavacia(&b))
    {
        printf("Las pilas estan en la misma posicion \n");
    }
    else
    {
        printf("Las pilas no estan la misma pisicion \n");
    }

    return 0;
}
