#include <stdio.h>
#include <cc50.h>
#include <stdlib.h>
#include <string.h>

// Esta funcao utiliza a cifra de Vigenére para
// criptografar textos, você deve passar uma
// String como parâmetro para que o algoritmo 
// embaralhe as letras a partir dela...

int
main(int argc,string argv[])
{ 
  // Aqui definimos nossas variaveis globais da funçao
  string k = argv[1];
  int g = strlen(k);
  // Define-se as condições de argumentos de linha de comando possiveis afim de evitar bugs
  if(argv[1] == false || argv[2]){
    return 1;
  }
  // Esse loop verifica posição por posição se o argumento passado é uma letra conhecida
  // E depois normaliza tanto as maiusculas e minusculas. ex.: 'a' = 'A' = 0 
  for (int j = 0; j < g; j++ )
  {
    if( k[j] > 122 || k[j] < 65 || (k[j] > 90 && k[j] < 97) )
      return 1;
    else if(k[j] < 91)
      k[j] = k[j] - 65;
    else
      k[j] = k[j] - 97;
  }
  printf("Digite a frase que deseja criptografar: ");
  // Aqui um input do usuário fornecerá a frase
  string p = GetString();
  printf("Frase criptografada: ");
  // Esse laço for percorre letra por letra para
  // transformá-la e printar a transformação...
  for (int i = 0, n = strlen(p), l = 0; i < n; i++)
  {
    if( p[i] < 91 && p[i] >= 65 ){
      // lógica, se for "A"; 65 - 65 + k entao A 
      // avançará k unidades... Se for Z, 90 - 65 + k
      // porém o resto disso por 26 sempre será um numero
      // menor que 26, logo; 25 + k, então Z será A + k - 1 unidades;  
      p[i] = 65 + ((p[i] - 65 + k[l % g]) % 26);
      printf("%c", p[i]);
      l++;
    }
    else if( p[i] >= 97 && p[i] < 123 ) {
      p[i] = 97 + ((p[i] - 97 + k[l % g]) % 26);
      printf("%c", p[i]);
      l++;
    }
    else{
      printf("%c", p[i]);
    }
  }
  return 0;
}
