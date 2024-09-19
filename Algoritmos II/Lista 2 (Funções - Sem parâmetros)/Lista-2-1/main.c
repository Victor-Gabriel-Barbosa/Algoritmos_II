/* 01 – Faça uma função que leia a idade de uma pessoa expressa em anos, meses e
 * dias e retorne a função principal o valor expresso apenas em dias. Defina que
 * todos os meses têm 30 dias */

#include <stdio.h>

void limpa_buffer() {
  char c;
  while ((c = getchar()) != '\n' && c != EOF);
}

int idadeEmDias(int anos, int meses, int dias) { // Converte a idade em dias
  int totalDias = anos * 365 + meses * 30 + dias;
  return totalDias;
}

int main(void) {
  int anos, meses, dias;
  printf("😎Digite a idade em anos: ");
  scanf("%d", &anos);
  limpa_buffer();
  printf("Digite a idade em meses: ");
  scanf("%d", &meses);
  limpa_buffer();
  printf("Digite a idade em dias: ");
  scanf("%d", &dias);
  limpa_buffer();
  int totalDias = idadeEmDias(anos, meses, dias);
  printf("\n[A idade em dias é: %d]", totalDias);
  return 0;
}