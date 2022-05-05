//Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila mazo,jugador1,jugador2;
    char control='s';

    inicpila(&mazo);
    inicpila(&jugador1);
    inicpila(&jugador2);

    while (control=='s')
    {
        leer(&mazo);
        printf("Desea cargar mas datos a la cartas?? prisione s: \n");
        fflush(stdin);
        scanf("%c",&control);
    }
     while (!pilavacia (&mazo))
  {
    if (!pilavacia (&mazo))
    {
      apilar (&jugador1, desapilar (&mazo));
      apilar (&jugador2, desapilar (&mazo));
    }
  }
    mostrar(&mazo);
    mostrar(&jugador1);
    mostrar(&jugador2);

    return 0;
}
