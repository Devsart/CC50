#include <stdio.h>
#include <cc50.h>

//this function sings a song about drinking beers over the wall

int
main(void)
{
  //the variable i counts the number of beers remaining
  for(int i = 99;i > 0; i--)
  {
    if(i == 2)
      printf("%i garrafas de cerveja no muro, bebo uma, jogo no lixo, %i garrafa no muro...\n", i, i-1);
      // This case is used to put the second term in singular, because only remained 1 bottle
    else if(i == 1)
      printf("%i garrafa de cerveja no muro, bebo uma, jogo no lixo, nenhuma garrafa no muro...\n", i);
      // Doesn't make sense to say 0 bottles in the wall, so, we put "none" instead of this
    else
      printf("%i garrafas de cerveja no muro, bebo uma, jogo no lixo, %i garrafas no muro...\n", i, i-1);
      // It prints how much bottles remain, in sequence...
  }
}
