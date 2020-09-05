/****************************************************************************
 * f2c.c
 *
 * Ci�ncia da Computa��o 50
 * Gabriel Lima Guimar�es
 *
 * Converte Fahrenheits para Celsius
 *
 * Demonstra o uso de aritm�tica computacional
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    printf("Temperatura em F: ");
    float f = GetFloat();
    
    float c = 5 / (float) 9 * (f - 32);
    
    printf("%.1f F = %.1f C\n", f, c);
}
