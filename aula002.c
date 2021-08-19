// aula 002 - Case-Sensitive, scanf, comentários

/*
  A linguagem C é case sensitive, ou seja, diferencia letras maiúsculas e minúsculas
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
  int num; // isto é uma variável
  printf("Digite um número: "); // imprime uma frase na tela
  scanf("%d", &num); // lê o número que o usuário digita

  printf("o número é igual a %d", num);

  return 0;
}


// getchar(); - zera o buffer do teclado do PC
// system("PAUSE"); - pausa o compilador no Windows