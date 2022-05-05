//Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar todos los elementos de la pila ORIGEN a la pila DESTINO.

#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila origen , destino;
    char continuar='s';
    inicpila(&origen);
    inicpila(&destino);
    pilavacia(&destino);

    do
    {
        leer (&origen);
        printf("Desea continuar?Presione 's': \n");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar=='s');

    printf("Pila Origen: \n");
    mostrar(&origen);

    while(!pilavacia(&origen));
    {
        apilar(&destino,desapilar(&origen));
    }
    printf("Pila destino: \n");
    mostrar(&destino);



    return 0;
}
