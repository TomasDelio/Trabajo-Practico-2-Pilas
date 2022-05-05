#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    printf("----------------------------------------------------------------------------------------------------------------------");
    printf("\n El codigo dice que si pila1 esta vacia en el ciclo ,se fija si el tope de pila1 es igual a 5 \n");
    printf("\n Si es verdadero,desapila la Pila1 y los Apila en AUX, despues desapila aux y apila en Result \n");
    printf("\n El if termina si es falso.Se vuelve a ejecutar el ciclo while  \n");
    printf("\n Salvo que todos los elementos de la Pila1 sean 5, en algun momento el tope sera un numero distinto a 5\n");
    printf("\n Asi, el if no entrara al verdadero, por lo que nunca se desapilara la Pila1, y el tope siempre sera distinto \n");
    printf("\n Entonces, el ciclo while se ejecutara infinitamente puesto que la Pila1 nunca se vaciara \n ");
    printf("----------------------------------------------------------------------------------------------------------------------");
    return 0;
}
