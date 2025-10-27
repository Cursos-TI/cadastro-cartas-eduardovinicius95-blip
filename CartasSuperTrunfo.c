#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo! \n");

    // --- Variáveis da Carta 1 ---
    
    char estado1;
    char codigo1[5];
    char cidade1[30];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1; 
    float pib_per_capita1;       

    // --- Variáveis da Carta 2 ---
    
    char estado2;
    char codigo2[5];
    char cidade2[30];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // =======================================================
    // ÁREA PARA ENTRADA DE DADOS
    // =======================================================

    // --- Pedir dados da Carta 1 ---
    printf("\n--- Digite os dados da Carta 1 ---\n");
    printf("Estado (uma letra): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1); // Cuidado: para nomes com espaço, isso falha.
    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1); 
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- Pedir dados da Carta 2 ---
    printf("\n--- Digite os dados da Carta 2 ---\n");
    printf("Estado (uma letra): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2); 
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // =======================================================
    // ÁREA PARA OS CÁLCULOS
    // =======================================================
    
    // --- Cálculos da Carta 1 ---
    if (area1 > 0) {
        densidade_populacional1 = (float)populacao1 / area1;
    } else {
        densidade_populacional1 = 0;
    }

    if (populacao1 > 0) {
        // Ajuste: O PIB já está em bilhões, o PIB per capita é (PIB * 1 bilhão) / Pop.
        pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    } else {
        pib_per_capita1 = 0;
    }

    // --- Cálculos da Carta 2 ---
    if (area2 > 0) {
        densidade_populacional2 = (float)populacao2 / area2;
    } else {
        densidade_populacional2 = 0;
    }
    if (populacao2 > 0) {
        pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    } else {
        pib_per_capita2 = 0;
    }
    
    // =======================================================
    // ÁREA PARA COMPARAÇÃO DAS CARTAS (Foco do Desafio)
    // =======================================================
    printf("\n\n--- Comparação de Cartas ---\n");

    // REQUISITO: Escolher UM atributo para comparar.

    // --- Exemplo de Comparação: População (Maior vence) ---
    printf("Atributo: População\n");
    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }


    /* // --- Exemplo de Comparação: Densidade Populacional (MENOR vence) ---
    // (Para usar este, comente o bloco de População acima)

    printf("Atributo: Densidade Populacional (hab/km²)\n");
    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, densidade_populacional1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, densidade_populacional2);
    
    // Atenção: A regra aqui é invertida!
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade_populacional2 < densidade_populacional1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    */


    /*
    // --- Exemplo de Comparação: PIB (Maior vence) ---
    // (Para usar este, comente os outros blocos)

    printf("Atributo: PIB (em bilhões de reais)\n");
    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pib2);
    
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    */

    return 0;
}