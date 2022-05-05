//Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila origen,destino,aux1;
    char control='s';

    inicpila(&origen);
    inicpila(&destino);
    inicpila(&aux1);

    while(control=='s')
    {
        leer(&origen);
        printf("desea cargar mas dataos?? presione 's': \n");
        fflush(stdin);
        scanf("%c",&control);
    }
    while(!pilavacia(&origen));
    {
    apilar(&aux1,desapilar(&origen));
    mostrar(&origen);
    }
    while (pilavacia(&origen)&&!pilavacia (&aux1))
    {
        apilar(&destino,desapilar(&aux1));
        mostrar(&aux1);
    }
    mostrar(&origen);
    mostrar(&destino);

    return 0;
}
