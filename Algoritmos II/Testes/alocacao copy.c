/* Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e mostre quantos dos ´
numeros s ´ ao pares e quantos s ˜ ao˜ ´ımpares.*/


#include <stdio.h>
#include <stdlib.h>

void limpaBuffer() {
  char c;
  while ((c = getchar())!= '\n' && c!=EOF);
}

int main() {
  int *vet, tam, par = 0, impar = 0;
  printf("Digite o tamanho do vetor a ser alocado: ");
  scanf("%d", &tam);
  limpaBuffer();
  vet = (int*)calloc(tam, sizeof(int));
  if (vet == NULL) {
    printf("Erro de alocação!");
    exit(1);
  }
  for (int i = 0; i < tam; i++) {
    printf("Digite um numero inteiro: ");
    scanf("%d", &vet[i]);
    limpaBuffer();
  }
  for (int i = 0; i < tam; i++) {
    if (vet[i] % 2 == 0) {
      par++;
    } else {
      impar++;
    }
  }
  printf("\nVetor lido com sucesso:\n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n\nNumero de numeros pares: %d", par);
  printf("\nNumero de numeros impares: %d\n", impar);
  free(vet);
}