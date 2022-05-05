#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{

    printf("\nA: No, no resuelve el ejercicio planteado.\n");

    printf("\nB: Los errores encontrados son:\n");
    printf("- No se llama a la libreria de pilas\n");
    printf("- Solo se puede cargar 1 elemento en la pila Origen.\n");
    printf("- Si la pila no tiene al 5 como elemento, el while se ejecutara por siempre.\n");
    printf("- Si la pila tiene un 5 como elemento, cuando entre al ciclo while, vera que la condicion es falsa, no apartara el 5,\n");
    printf("y saldra del while sin comprobar si el resto de los elementos son 5 o no.\n");
    printf("- El if deberia ir dentro del while, y las condiciones deberían estar invertidas.\n");

    printf("\nC: Codigo reescrito:\n");
    printf("#include <stdio.h>\n");
    printf("#include <stdlib.h>\n");
    printf("#include \"pila.h\"\n");
    printf("int main()\n");
    printf("{\n");
    printf("    char continuar;\n");
    printf("    Pila Origen,Distinto,aux;\n");
    printf("    inicpila(&Origen);\n");
    printf("    inicpila(&Distinto);\n");
    printf("    inicpila(&aux);\n");
    printf("    printf(\"Ingrese los elementos de la pila:\");\n");
    printf("    do\n");
    printf("    {\n");
    printf("        leer(&Origen);\n");
    printf("        printf(\"Desea ingresar otro elemento?\");\n");
    printf("        printf(\"s = SI\");\n");
    printf("        printf(\"n = NO\");\n");
    printf("        printf(\"Respuesta:\");\n");
    printf("        fflush(stdin);\n");
    printf("        scanf(\"%%c\",&continuar);\n");
    printf("    }\n");
    printf("    while(continuar!='n');\n");
    printf("    printf(\"La pila cargada por el usuario es:\");\n");
    printf("    mostrar(&Origen);\n");
    printf("    while(!pilavacia(&Origen))\n");
    printf("    {\n");
    printf("        if(tope(&Origen)!=5)\n");
    printf("        {\n");
    printf("            apilar(&Distinto,desapilar(&Origen));\n");
    printf("        }\n");
    printf("        else\n");
    printf("        {\n");
    printf("            apilar(&aux,desapilar(&Origen));\n");
    printf("        }\n");
    printf("    }\n");
    printf("    printf(\"La pila cargada por el usuario sin los 5 es:\");\n");
    printf("    mostrar(&Distinto);\n");
    printf("}\n");

    {
        char continuar;
        Pila Origen,Distinto,aux;
        inicpila(&Origen);
        inicpila(&Distinto);
        inicpila(&aux);
        printf("Ingrese los elementos de la pila:\n\n");
        do
        {
            leer(&Origen);
            printf("Desea ingresar otro elemento? s/n Respuesta: ");
            fflush(stdin);
            scanf("%c",&continuar);
        }
        while(continuar!='n');
        printf("\nLa pila cargada por el usuario es:");
        mostrar(&Origen);
        while(!pilavacia(&Origen))
        {
            if(tope(&Origen)<5)
            {
                apilar(&Distinto,desapilar(&Origen));
            }
            else
            {
                apilar(&aux,desapilar(&Origen));
            }
        }
        printf("La pila cargada por el usuario sin los elementos que preceden al 5 es:");
        mostrar(&Distinto);
    }
    printf("\nEnter para ver la respuesta D:");

    printf("\nD: El programa usa:\n");
    printf("- La libreria de pilas\n");
    printf("- 3 pilas\n");
    printf("- 1 variable de tipo char\n");
    printf("- Un ciclo while, y una condicion if dentro el ciclo while\n");
    printf("\n");

    return 0;
}
