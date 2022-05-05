//Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada, aux1,aux2;
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);

    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);

    mostrar(&dada);

    apilar(&aux1,desapilar((&dada)));
    apilar(&aux1,desapilar((&dada)));
    apilar(&aux1,desapilar((&dada)));

    mostrar(&aux1);

    apilar(&aux2,desapilar(&dada));
    apilar(&aux2,desapilar(&dada));

    mostrar(&aux2);

    return 0;
}
