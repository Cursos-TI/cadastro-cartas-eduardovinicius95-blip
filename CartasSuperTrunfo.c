/*
 * Meu código para o Desafio Super Trunfo - Comparação de 2 Rodadas
 * Autor: (Seu Nome/Login)
 *
 * ... (Todo o código anterior se mantém igual até a última parte) ...
 */

#include <stdio.h> // Para printf e scanf
#include <string.h> // Para 'strcpy'

int main() {
    printf("Desafio Super Trunfo! - Disputa de 2 Rodadas \n");

    // --- Variáveis das Cartas (Igual) ---
    char estado1, codigo1[5], cidade1[30];
    unsigned long int populacao1; 
    float area1, pib1, densidade_populacional1, pib_per_capita1, soma_atributos1;
    int pontos_turisticos1;

    char estado2, codigo2[5], cidade2[30];
    unsigned long int populacao2; 
    float area2, pib2, densidade_populacional2, pib_per_capita2, soma_atributos2;
    int pontos_turisticos2;

    // --- Variáveis de Controle das 2 Rodadas (Igual) ---
    int placar1 = 0; // Placar da Carta 1
    int placar2 = 0; // Placar da Carta 2
    int escolha1 = 0; // Guarda a escolha da primeira rodada
    int escolha2 = 0; // Guarda a escolha da segunda rodada


    // =======================================================
    // ÁREA PARA ENTRADA DE DADOS (Mantida com dados fixos)
    // =======================================================
    
    printf("\n--- Carregando dados fixos das cartas ---\n");
    estado1 = 'A'; strcpy(codigo1, "A01"); strcpy(cidade1, "Sao Paulo");
    populacao1 = 12325000; area1 = 1521.11; pib1 = 699.28; pontos_turisticos1 = 50;
    
    estado2 = 'B'; strcpy(codigo2, "B02"); strcpy(cidade2, "Rio de Janeiro");
    populacao2 = 6748000; area2 = 1200.25; pib2 = 300.50; pontos_turisticos2 = 30;
    printf("Cartas carregadas: %s (%c) vs %s (%c)\n", cidade1, estado1, cidade2, estado2);

    // =======================================================
    // ÁREA PARA OS CÁLCULOS (Mantida igual)
    // =======================================================
    
    // --- Cálculos da Carta 1 ---
    densidade_populacional1 = (area1 > 0) ? ((float)populacao1 / area1) : 0;
    pib_per_capita1 = (populacao1 > 0) ? ((pib1 * 1000000000) / populacao1) : 0;
    soma_atributos1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1;

    // --- Cálculos da Carta 2 ---
    densidade_populacional2 = (area2 > 0) ? ((float)populacao2 / area2) : 0;
    pib_per_capita2 = (populacao2 > 0) ? ((pib2 * 1000000000) / populacao2) : 0;
    soma_atributos2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2;
    
    // =======================================================
    // ÁREA DE COMPARAÇÃO - RODADA 1 (Mantida igual)
    // =======================================================
    
    printf("\n\n--- RODADA 1 de 2 ---\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    
    scanf("%d", &escolha1);
    
    // Validação simples
    while (escolha1 < 1 || escolha1 > 5) {
        printf("Erro! Escolha um número entre 1 e 5. Tente de novo: ");
        scanf("%d", &escolha1);
    }
    
    printf("\n--- Resultado da Rodada 1 ---\n");

    // Switch para a RODADA 1
    switch (escolha1) {
        case 1:
            printf("Atributo: População\n");
            if (populacao1 > populacao2) {
                printf("Rodada 1: Carta 1 (%s) venceu!\n", cidade1);
                placar1++; 
            } else if (populacao2 > populacao1) {
                printf("Rodada 1: Carta 2 (%s) venceu!\n", cidade2);
                placar2++; 
            } else {
                printf("Empate! Ninguém pontuou.\n"); 
            }
            break;
        case 2:
            printf("Atributo: Área (km²)\n");
            if (area1 > area2) {
                printf("Rodada 1: Carta 1 (%s) venceu!\n", cidade1);
                placar1++;
            } else if (area2 > area1) {
                printf("Rodada 1: Carta 2 (%s) venceu!\n", cidade2);
                placar2++;
            } else {
                printf("Empate! Ninguém pontuou.\n");
            }
            break;
        case 3:
            printf("Atributo: PIB (em bilhões de reais)\n");
            if (pib1 > pib2) {
                printf("Rodada 1: Carta 1 (%s) venceu!\n", cidade1);
                placar1++;
            } else if (pib2 > pib1) {
                printf("Rodada 1: Carta 2 (%s) venceu!\n", cidade2);
                placar2++;
            } else {
                printf("Empate! Ninguém pontuou.\n");
            }
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Rodada 1: Carta 1 (%s) venceu!\n", cidade1);
                placar1++;
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Rodada 1: Carta 2 (%s) venceu!\n", cidade2);
                placar2++;
            } else {
                printf("Empate! Ninguém pontuou.\n");
            }
            break;
        case 5:
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Rodada 1: Carta 1 (%s) venceu!\n", cidade1);
                placar1++;
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("Rodada 1: Carta 2 (%s) venceu!\n", cidade2);
                placar2++;
            } else {
                printf("Empate! Ninguém pontuou.\n");
            }
            break;
    } // Fim do switch 1
    
    // =======================================================
    // ÁREA DE COMPARAÇÃO - RODADA 2 (Mantida igual)
    // =======================================================

    printf("\n\n--- RODADA 2 de 2 ---\n");
    printf("Escolha o SEGUNDO atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");

    scanf("%d", &escolha2);

    // Validação
    while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        if (escolha2 == escolha1) {
            printf("Erro! Esse atributo já foi usado. Escolha outro: ");
        } else {
            printf("Erro! Escolha um número entre 1 e 5. Tente de novo: ");
        }
        scanf("%d", &escolha2);
    }
    
    printf("\n--- Resultado da Rodada 2 ---\n");

    // Switch para a RODADA 2
    switch (escolha2) {
        case 1:
            printf("Atributo: População\n");
            if (populacao1 > populacao2) {
                printf("Rodada 2: Carta 1 (%s) venceu!\n", cidade1);
                placar1++; 
            } else if (populacao2 > populacao1) {
                printf("Rodada 2: Carta 2 (%s) venceu!\n", cidade2);
                placar2++; 
            } else {
                printf("Empate! Ninguém pontuou.\n"); 
            }
            break;
        case 2:
            printf("Atributo: Área (km²)\n");
            if (area1 > area2) {
                printf("Rodada 2: Carta 1 (%s) venceu!\n", cidade1);
                placar1++;
            } else if (area2 > area1) {
                printf("Rodada 2: Carta 2 (%s) venceu!\n", cidade2);
                placar2++;
            } else {
                printf("Empate! Ninguém pontuou.\n");
            }
            break;
        case 3:
            printf("Atributo: PIB (em bilhões de reais)\n");
            if (pib1 > pib2) {
                printf("Rodada 2: Carta 1 (%s) venceu!\n", cidade1);
                placar1++;
            } else if (pib2 > pib1) {
                printf("Rodada 2: Carta 2 (%s) venceu!\n", cidade2);
                placar2++;
            } else {
                printf("Empate! Ninguém pontuou.\n");
            }
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Rodada 2: Carta 1 (%s) venceu!\n", cidade1);
                placar1++;
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Rodada 2: Carta 2 (%s) venceu!\n", cidade2);
                placar2++;
            } else {
                printf("Empate! Ninguém pontuou.\n");
            }
            break;
        case 5:
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Rodada 2: Carta 1 (%s) venceu!\n", cidade1);
                placar1++;
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("Rodada 2: Carta 2 (%s) venceu!\n", cidade2);
                placar2++;
            } else {
                printf("Empate! Ninguém pontuou.\n");
            }
            break;
    } // Fim do switch 2

    // =======================================================
    // ÁREA FINAL - DECLARAÇÃO DO VENCEDOR (MODIFICADA)
    // =======================================================
    
    printf("\n\n--- FIM DE JOGO! ---\n");
    printf("PLACAR FINAL: %s [%d] x [%d] %s\n", cidade1, placar1, placar2, cidade2);

    // Lógica final usando == e &&, como você pediu!
    // || significa "OU"
    
    // Casos de vitória da Carta 1 (2x0 OU 1x0)
    if ((placar1 == 2 && placar2 == 0) || (placar1 == 1 && placar2 == 0)) {
        printf("O GRANDE VENCEDOR É: CARTA 1 (%s)!\n", cidade1);
    } 
    // Casos de vitória da Carta 2 (0x2 OU 0x1)
    else if ((placar2 == 2 && placar1 == 0) || (placar2 == 1 && placar1 == 0)) {
        printf("O GRANDE VENCEDOR É: CARTA 2 (%s)!\n", cidade2);
    } 
    // Casos de Empate (1x1 OU 0x0)
    else if ((placar1 == 1 && placar2 == 1) || (placar1 == 0 && placar2 == 0)) {
        printf("O JOGO TERMINOU EM EMPATE GERAL!\n");
    }

    return 0; // Fim do programa
}