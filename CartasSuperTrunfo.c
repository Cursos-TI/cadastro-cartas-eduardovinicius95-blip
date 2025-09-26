#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo! \n");
    // Área para definição das variáveis

    // Variaveis da carta 1
    char estado1;
    char codigo1[5];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Variaveis da carta 2
    char estado2;
    char codigo2[5];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // --- Área para entrada de dados ---

    // Introduzir dados carta 1
    printf("\nDigite os dados da Carta 1:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Introduzir dados carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- Área para CÁLCULOS ---
    
    // Cálculos da Carta 1
    densidade_populacional1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    pib_per_capita1 = (populacao1 > 0) ? (pib1 * 1000000000) / populacao1 : 0;

    // Cálculos da Carta 2
    densidade_populacional2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    pib_per_capita2 = (populacao2 > 0) ? (pib2 * 1000000000) / populacao2 : 0;


    // --- Área para exibição dos dados ---
    
    // Exibicao dados carta 1
    printf("\n\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    // Exibicao dados carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    printf ("\n\nCartas Cadastradas com sucesso!\n");

    return 0;
}
