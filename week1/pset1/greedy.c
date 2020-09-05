#include <cc50.h>
#include <stdio.h>

int
main(void)
{
  //this float variable contains the float value of the money we will change 
  float troco = 0;
  bool valorok = false;
  //This while loop checks if the value is not lesser than zero
  while(!valorok){
    printf("Quanto voce quer trocar?\n");
    troco = GetFloat();
    if(troco > 0)
      valorok = true;
    else
      printf("Desculpe, não entendi...\n");
  }
  //This trocoint is an integer value approx. for our quantity of cents
  int trocoint = (troco*1001/10);
  //This contadordemoedas help us to count how many coins we will need
  int contadordemoedas = 0;
  while(trocoint > 0){
      if(trocoint >= 50)
      {
        trocoint -= 50;
        contadordemoedas += 1;
      }
      else if(trocoint < 50 && trocoint >= 25)
      {
        trocoint -=25;
        contadordemoedas += 1;
      }
     else if(trocoint < 25 && trocoint >= 10)
     {
       trocoint -= 10;
       contadordemoedas += 1;
     }
     else if(trocoint < 10 && trocoint >=5)
     {
       trocoint -= 5;
       contadordemoedas += 1;
     }
     else
     {
       trocoint -= 1;
       contadordemoedas += 1;
     }
    }
  
  printf("Voce precisa de %i moedas.",contadordemoedas);
}