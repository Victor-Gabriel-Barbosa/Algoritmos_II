/* 1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros, ´
(b) Pec¸a para o usuario digitar os 5 n ´ umeros no espac¸o alocado, ´
(c) Mostre na tela os 5 numeros, ´
(d) Libere a memoria alocada. */

#include <stdio.h>
#include <stdlib.h>

void limpaBuffer() {
  char c;
  while ((c = getchar())!= '\n' && c!=EOF);
}

int main() {
  int *vet;
  vet = (int*)calloc(5, sizeof(int));
  if (vet == NULL) {
    printf("Erro de alocação!");
    exit(1);
  }
  for (size_t i = 0; i < 5; i++) {
    printf("%d ", vet[i]);
  }
  
  for (size_t i = 0; i < 5; i++) {
    printf("Digite um numero inteiro: ");
    scanf("%d", &vet[i]);
    limpaBuffer();
  }
  printf("Numeros digitados:\n");
  for (size_t i = 0; i < 5; i++) {
    printf("%d ", vet[i]);
  }
  free(vet);
}