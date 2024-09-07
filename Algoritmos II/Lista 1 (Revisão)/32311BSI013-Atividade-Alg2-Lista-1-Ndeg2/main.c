// Faça um algoritmo que leia a idade de uma pessoa em dias e mostre-a expressa em anos, meses e dias (Defina que todos os meses tem 30 dias).

#include <stdio.h>

int main(void) {
  int dias, meses, anos;
  printf("Digite a idade da pessoa em dias: ");
  scanf("%d", &dias);  
  anos = dias / 365;
  dias = dias % 365;
  meses = dias / 30;
  dias = dias % 30;
  printf( "A idade da pessoa é %d anos, %d meses e %d dias", anos, meses, dias);
  return 0;
}