#include <stdio.h>

typedef struct {
    char rua[50], bairro[50], cidade[50];
    int num, CEP; 
} Endereco;
    
typedef struct dados_pessoa {
    char nome[50], CPF[11];
    Endereco end;
} Dados;

void limpa_buffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void limpa_tela(char *msg) {
    printf("%s", msg);
    limpa_buffer();
    printf("\033[2J\033[1;1H");   
}

void imprime_dados(Dados dado[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("\nCadastro %d:\n", i + 1);    
        printf("\nNome: %s\n", dado[i].nome);
        printf("CPF: %s\n", dado[i].CPF);
        printf("\nEndereço:\n");
        printf("Rua: %s\nBairro: %s\nCidade: %s\n", dado[i].end.rua, dado[i].end.bairro, dado[i].end.cidade);
        printf("Número: %d\n", dado[i].end.num);
        printf("CEP: %d\n", dado[i].end.CEP);
    }
}

Dados cadastra_dados() {
    Dados dado;
    printf("\nNome: ");
    scanf("%49[^\n]", dado.nome);
    limpa_buffer();
    printf("CPF: ");
    scanf("%10[^\n]", dado.CPF);
    limpa_buffer();
    printf("\nEndereço:\n");
    printf("Rua: ");
    scanf("%49[^\n]", dado.end.rua);
    limpa_buffer();
    printf("Bairro: ");
    scanf("%49[^\n]", dado.end.bairro);
    limpa_buffer();
    printf("Cidade: ");
    scanf("%49[^\n]", dado.end.cidade);
    limpa_buffer();
    printf("Número: ");
    scanf("%d", &dado.end.num);
    limpa_buffer();
    printf("CEP: ");
    scanf("%d", &dado.end.CEP);
    limpa_buffer();
    printf("\nCadastro efetuado com sucesso!\n");
    return dado;
}

int main() {
    int tam = 10, i;
    Dados dado[tam];
    for (i = 0; i < 1000; i++) {
        printf("Testando...");
        limpa_tela("\033[2K\rTestando");
    }
    for (i = 0; i < 10; i++) {
        limpa_tela("Aperte [ENTER] para continuar...");
        printf("\nCadastro %d:\n", i + 1);
        dado[i] = cadastra_dados();
    }
    imprime_dados(dado, tam);
    return 0;
}
