#include <stdio.h>

struct endereco {
    char rua[50], bairro[50];
    int numero;
};

struct pessoas {
    char nome[50];
    int idade;
    float altura;
    struct endereco end; 
} pessoa1;

void limpa_buffer() {
    char c;
    while ((c = getchar())!= '\n' && c!= EOF);
}

struct pessoas cadastrar_pessoa() {
    struct pessoas pessoa;
    printf("Nome: ");
    scanf("%49[^\n]", pessoa.nome);
    limpa_buffer();
    printf("Idade: ");
    scanf("%d", &pessoa.idade);
    limpa_buffer();
    printf("Altura: ");
    scanf("%f", &pessoa.altura);
    limpa_buffer();
    printf("\nEndereco:\n");
    printf("Rua: ");
    scanf("%49[^\n]", pessoa.end.rua);
    limpa_buffer();
    printf("Bairro: ");
    scanf("%49[^\n]", pessoa.end.bairro);
    limpa_buffer();
    printf("Numero: ");
    scanf("%d", &pessoa.end.numero);
    limpa_buffer();
    return pessoa;
}

void imprime_dados(struct pessoas pessoa) {
    printf("\nNome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f\n", pessoa.altura);
    printf("\nEndereco:\n");
    printf("Rua: %s\n", pessoa.end.rua);
    printf("Bairro: %s\n", pessoa.end.bairro);
    printf("Numero: %d\n", pessoa.end.numero);
}

int main() {
    pessoa1 = cadastrar_pessoa();
    struct pessoas pessoa1;
    pessoa1 = cadastrar_pessoa();
    imprime_dados(pessoa1);
    return 0;  
}
    