#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado;
    char codigo[4];           // Ex: A01 → 3 caracteres + '\0' para terminar a string
    char nomeCidade[50];      // Espaço para o nome da cidade 
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Entrada de dados
    printf("=== Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);  // Lê até encontrar Enter (permite espaços no nome)

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Saída de dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}
