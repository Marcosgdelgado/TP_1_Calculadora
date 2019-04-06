#include <stdio.h>
#include <stdlib.h>
#include "Libreria.h"


int main(void)
{
    char seguir='s';
    int opcion=0;
    float numero_uno;
    float numero_dos;


    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=%.2f)\n", numero_uno);
        fflush(stdin);
        printf("2- Ingresar 2do operando (B=%.2f)\n", numero_dos);
        fflush(stdin);
        printf("3- a)Calcular la suma (A+B)\n   b) Calcular la resta (A-B)\n   c) Calcular la division(A/B)\n   d) Calcular multiplicacion (A*B)\n   e) Calcular factorial (A!)\n");
        printf("\n4- Imprimir todos los resultados. \n");
        printf("\n5- Salir\n");

        printf("\nSeleccione una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1: printf("\nIngrese un numero: ");
                    fflush(stdin);
                    scanf("%f", &numero_uno);
                break;

            case 2: printf("\nIngrese un numero: ");
                    fflush(stdin);
                    scanf("%f", &numero_dos);
                break;

            case 3: suma(numero_uno,numero_dos);

                    resta(numero_uno,numero_dos);

                    division(numero_uno, numero_dos);

                    multiplicacion(numero_uno, numero_dos);

                    factoreo(numero_uno);
                    factoreoB(numero_dos);

                break;

            case 4:
                    printf("\nLa suma total es: %.2f\n\n", suma(numero_uno,numero_dos));
                    fflush(stdin);
                    printf("\nLa resta total es: %.2f\n\n", resta(numero_uno,numero_dos));
                    fflush(stdin);
                    printf("\nLa division total es: %.2f\n\n", division(numero_uno, numero_dos));
                    fflush(stdin);
                    printf("\nLa multiplicacion total es: %.2f\n\n", multiplicacion(numero_uno, numero_dos));
                    fflush(stdin);
                    printf("\nLa factor total de A es: %.2f y el factor total de B es: %.2f \n\n", factoreo(numero_uno), factoreoB(numero_dos));
                    fflush(stdin);
                break;

            case 5: seguir = 'n';

                break;
        }

    }
    return 0;
}
