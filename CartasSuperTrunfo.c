#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo! \n");

    // --- Variáveis da Carta 1 ---
    // Aqui guardamos todas as informações da primeira carta
    char estado1;
    char codigo1[5];
    char cidade1[30];
    unsigned long int populacao1; // Mudei para unsigned long int para aceitar números bem grandes
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1; // Variável para guardar o cálculo da densidade
    float pib_per_capita1;         // Variável para guardar o cálculo do PIB per capita
    float super_poder1;            // Variável nova para guardar o Super Poder

    // --- Variáveis da Carta 2 ---
    // Agora fazemos o mesmo para a segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[30];
    unsigned long int populacao2; // Mudei para unsigned long int também
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // =======================================================
    // ÁREA PARA ENTRADA DE DADOS
    // =======================================================

    // --- Pedir dados da Carta 1 ---
    printf("\n--- Digite os dados da Carta 1 ---\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1); // Usei %lu porque a variável é unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- Pedir dados da Carta 2 ---
    printf("\n--- Digite os dados da Carta 2 ---\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2); // Usei %lu aqui também
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
    // Calculo da densidade: população / área
    if (area1 > 0) {
        densidade_populacional1 = (float)populacao1 / area1;
    } else {
        densidade_populacional1 = 0;
    }

    // Calculo do pib per capita: (pib * 1 bilhão) / população
    if (populacao1 > 0) {
        pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    } else {
        pib_per_capita1 = 0;
    }

    // Calculo do Super Poder: somar todos os atributos
    // O inverso da densidade é 1 / densidade. Se a densidade for 0, o inverso também será 0.
    float inverso_densidade1 = 0;
    if (densidade_populacional1 > 0) {
        inverso_densidade1 = 1.0 / densidade_populacional1;
    }
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;

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
    float inverso_densidade2 = 0;
    if (densidade_populacional2 > 0) {
        inverso_densidade2 = 1.0 / densidade_populacional2;
    }
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;
    
    // =======================================================
    // ÁREA PARA COMPARAÇÃO DAS CARTAS
    // =======================================================
    printf("\n\n--- Comparação de Cartas: ---\n");

    // Comparando a População (maior vence)
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    // Comparando a Área (maior vence)
    if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    // Comparando o PIB (maior vence)
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }
    
    // Comparando os Pontos Turísticos (maior vence)
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    // Comparando a Densidade Populacional (MENOR vence)
    // Atenção: a regra aqui é diferente!
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    // Comparando o PIB per Capita (maior vence)
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    // Comparando o Super Poder (maior vence)
    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}