#include <stdio.h>

#include <stdio.h>

int main() {
    // Definindo as variáveis para armazenar as informações de uma cidade
    char codigo[4]; // Código da cidade (por exemplo> A01, B02, etc...)
    char nome[30]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área da cidade em km²
    float pib; // PIB da cidade em milhões
    int pontos_turisticos; // Número de pontos turísticos da cidade

    // Cadastro da cidade
    printf("*** Cadastro de Cartas - Cidades ***\n");

    printf("Digite o código da cidade (Ex: A01, B02): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n*** Dados da Cidade Cadastrada ***\n");
    printf("Código da Cidade: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
