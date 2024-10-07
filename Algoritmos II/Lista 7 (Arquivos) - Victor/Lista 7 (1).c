/*1 - Escreva um programa que:
  (a) Crie/abra um arquivo texto de nome “arq.txt”
  (b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere ‘0’
  (c) Feche o arquivo 
  Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados. */

#include <stdio.h>
#include <stdlib.h>

void escrever_arquivo(char *nome_arquivo) { // [FUNÇÃO DE ESCREVER NO ARQUIVO]
  FILE *arquivo = fopen(nome_arquivo, "w");
  char c;
  if (arquivo == NULL) {
    printf("\nErro ao abrir o arquivo!\n");
    exit(1);
  }
  printf("\nDigite os caracteres a serem gravados no arquivo (0 - parar):\n");
  do {
    c = getchar();
    fputc(c, arquivo);
  } while (c != '0');
  fclose(arquivo);
}

void ler_arquivo(char *nome_arquivo) { // [FUNÇÃO DE LER O ARQUIVO]
  FILE *arquivo = fopen(nome_arquivo, "r");
  if (arquivo == NULL) {
    printf("\nErro ao abrir o arquivo!\n");
    exit(1);
  }
  char c;
  printf("\nCaracteres gravados no arquivo:\n");
  while ((c = fgetc(arquivo)) != EOF) {
    printf("%c", c);
  }
  fclose(arquivo);
}

int main(void) {
  escrever_arquivo("arq.txt");
  ler_arquivo("arq.txt");
  printf("\nTudo certo!");
  return 0;
}