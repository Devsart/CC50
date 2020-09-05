#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(void)
{
  //generates a seed to run our pseudorandom number
  srand(time(NULL));
  //set the number of skittles between 0 and 1023
  int skittles = rand() % 1023;
  bool correto = false;
  printf("Ola! Eu sou uma maquina de doces falante, quero ver se voce advinha quantas balinhas tem dentro de mim.\nDica: Estou pensando em um numero entre 0 e 1023. Tente advinhar!\n ");
  do
  {
    //this chute attribute defines the input valor of what number the user guess it is
    int chute = GetInt();
    //this statement checks if the user mates the number of skittles or not
    if(chute == skittles)
      correto = true;
    else if(chute > 1023)
      printf("Nao exagera, ne!\n");
    else if(chute < skittles)
      printf("Haha! Eu tenho mais que isso! Tente novamente... \n");
    else
      printf("Hm... Ok! Nao tenho tantos assim. Tente novamente... \n");
  }
  while(!correto);
  //this print occurs when the user win the game
  printf("Parabens! Voce acertou! Eu tenho %i balas, quer uma? \n",skittles);
  return 0;
}