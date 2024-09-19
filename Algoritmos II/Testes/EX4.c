#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpaBuffer() {
  char c;
  while ((c = getchar())!= '\n' && c!=EOF);
}

char *alocaString(int tam) {
  char *str = (char*)malloc((tam+2) * sizeof(char));
  if (str == NULL) {
    printf("\nErro ao alocar memória p/ string!\n");
    exit(1);
  }
  return str;
}

void removeVogal(char *str) {
  char *novaStr = alocaString(strlen(str));
  char vogal[] = "aeiou";
  int j = 0;
  for (size_t i = 0; i < strlen(str); i++) {
    if (strchr(vogal, str[i]) == NULL) {
      novaStr[j++] = str[i];
    }
  }
  novaStr[j] = '\0';
  strcpy(str, novaStr);
}

int main() {
  int tam;
  printf("Digite o tamanho da string: ");
  scanf("%d", &tam);
  limpaBuffer();
  char *string = alocaString(tam);
  printf("\nDigite a string: ");
  fgets(string, tam + 1, stdin);
  printf("\nString alocada: %s\n", string);
  removeVogal(string);
  printf("\nString sem vogais: %s\n", string);
  free(string);
  return 0;
}