/****************************************************************************
 * math3.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Computa e imprime uma opera��o com floats.
 *
 * Demonstra uma perda de precis�o
 ***************************************************************************/

#include <stdio.h>

int
main(void)
{
    float answer = 17 / 13;
    printf("%.2f\n", answer);
}
