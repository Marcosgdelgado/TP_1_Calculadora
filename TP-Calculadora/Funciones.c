#include <stdio.h>
#include <stdlib.h>

/**
 * \BRIEF suma de dos parametros
 * \PARAM num1
 * \PARAM num2
 * \RETURN resuktado
 */
float suma(float numero_uno, float numero_dos)
    {   float retorno;
        retorno =numero_uno+numero_dos;
        return retorno;
    }

/**
 * \BRIEF resta de dos parametros
 * \PARAM num1
 * \PARAM num2
 * \RETURN resultado
 */
float resta(float numero_uno, float numero_dos)
{
    float retorno;
    retorno= numero_uno-numero_dos;
    return retorno;

}

/**
 * \BRIEF division dos parametros
 * \PARAM num1 (a)
 * \PARAM num2 (b)
 * \RETURN resultado
 */

float division(float numero_uno, float numero_dos)
{
    float retorno;

    if ( numero_uno<= 0 )
                    {
                       printf("\n numero ingresado no es valido para division.");
                       return 0;

                    }
     if (numero_dos<= 0 )
                    {
                       printf("\nnumero ingresado no valido para division. ");

                        return 0;
                    }




    retorno= numero_uno/numero_dos;
    return retorno;

}

/**
 * \BRIEF multiplica dos parametros
 * \PARAM num1
 * \PARAM num2
 * \RETURN resultado
 */
float multiplicacion(float numero_uno, float numero_dos)
{
    float retorno;
    retorno= numero_uno*numero_dos;
    return retorno;

}

/**
 * \BRIEF realiza el calculo factorial de un numero
 * \PARAM num (n)
 * \RETURN resultado factorial
 */
float factoreo(float numero_uno)
{
    float retorno=1;
    float i=1;


    if (numero_uno <= 0)
                {
                    printf("\nEl numero ingresado no es valido para factorizacion\n ");
                    return 0;
                }
                        for(i=1;i<=numero_uno;i++)
                        {
                            retorno= retorno*i;

                        }

    return retorno;

}
float factoreoB(float numero_dos)
{
    float retorno2=1;
    float e=1;

    if (numero_dos <=0){
                        printf("\nEl numero ingresado no es valido para factorizacion\n ");
                        return 0;
                     }
                        for(e=1;e<=numero_dos;e++)
                        {
                            retorno2= retorno2*e;

                        }
      return retorno2;
}

