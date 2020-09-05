#include <stdio.h>
#include <cc50.h>
#include <stdlib.h>
#include <string.h>

// Esta funcao utiliza a cifra de cesar para
// criptografar textos, você deve passar um 
// valor inteiro como parâmetro para que ela
// embaralhe as letras a partir dele...

int
main(int argc,string argv[])
{ 
  // Aqui usa-se atoi para converter o input p/ int 
  int k = atoi(argv[1]);
  if(k < 0 || k == false){
    return 1;
  }
  printf("Digite a frase que deseja criptografar: ");
  // Aqui um input do usuário fornecerá a frase
  string p = GetString();
  printf("Frase criptografada: ");
  // Esse laço for percorre letra por letra para
  // transformá-la e printar a transformação...
  for (int i = 0, n = strlen(p); i < n; i++)
  {
    if(p[i] == ' '){
      printf("%c", p[i]);
    }
    else if(p[i] < 91){
      // lógica, se for "A"; 65 - 65 + k entao A 
      // avançará k unidades... Se for Z, 90 - 65 + k
      // porém o resto disso por 26 sempre será um numero
      // menor que 26, logo; 25 + k, então Z será A + k - 1 unidades;  
      p[i] = 65 + ((p[i] - 65 + k) % 26);
      printf("%c", p[i]);
    }
    else{
      p[i] = 97 + ((p[i] - 97 + k) % 26);
      printf("%c", p[i]);
    }
  }
  return 0;
}
