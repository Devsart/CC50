#include <stdio.h>
//CÓDIGO PARA MOSTRAR ERROS DE APROXIMACAO EM C
int
main(void)
{
  float x = 0.35;
  float y = 0.01;
  float z = x+y;
  printf("z = %.10f x = %.10f y = %.10f \n", z, x, y);
  return 0;
}

/* 
ARGUMENTOS DE LINHA DE COMANDO
INT ARGC, CHAR ARGV[] EXEMPLO
------------------------------------------------------------
 TYPECAST -> (INT) 0.0321831 = 0
 (CHAR) PARA (INT) TABELA ASCII
  */