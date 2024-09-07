/* O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro e escrever o custo ao consumidor*/

#include <stdio.h>

int main() {
  int preco = 0;
  float impostos = 0.28, distribuidor = 0.45, custo_final = 0;
  printf("Digite o custo de fábrica do carro: ");
  scanf("%d", &preco);
  custo_final = preco + (preco * impostos) + (preco * distribuidor);
  printf("😎O custo final do carro é: R$%.2f", custo_final);
  return 0;
}