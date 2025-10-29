#include <stdio.h> // Para printf e scanf
#include <string.h> // Tive que incluir essa biblioteca nova para usar o 'strcpy'

int main() {
    // Título do Desafio
    printf("Desafio Super Trunfo! - Nível Aventureiro \n");

    // --- Variáveis da Carta 1 ---
    // (Declarações mantidas, sem mudanças)
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
    // (Declarações mantidas, sem mudanças)
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
    // ÁREA PARA ENTRADA DE DADOS (MODIFICADA)
    // =======================================================
    
    printf("\n--- Carregando dados fixos das cartas ---\n");

    // --- Dados Fixos da Carta 1 (São Paulo) ---
    // Em vez de 'scanf', agora eu atribuo os valores direto
    estado1 = 'A';
    // Para strings (vetor de char), preciso usar 'strcpy'
    strcpy(codigo1, "A01"); 
    // Coloquei "Sao Paulo" sem acento, C puro às vezes buga com acentuação
    strcpy(cidade1, "Sao Paulo"); 
    populacao1 = 12325000;
    area1 = 1521.11;
    pib1 = 699.28;
    pontos_turisticos1 = 50;
    
    // --- Dados Fixos da Carta 2 (Rio de Janeiro) ---
    // Mesma coisa para a carta 2
    estado2 = 'B';
    strcpy(codigo2, "B02");
    strcpy(cidade2, "Rio de Janeiro");
    populacao2 = 6748000;
    area2 = 1200.25;
    pib2 = 300.50;
    pontos_turisticos2 = 30;

    // Coloquei um printf para confirmar que as cartas foram "carregadas"
    printf("Cartas carregadas: %s (%c) vs %s (%c)\n", cidade1, estado1, cidade2, estado2);

    // =======================================================
    // ÁREA PARA OS CÁLCULOS
    // =======================================================
    // Ela agora vai usar os valores fixos que eu defini ali em cima.
    
    // --- Cálculos da Carta 1 ---
    if (area1 > 0) {
        densidade_populacional1 = (float)populacao1 / area1;
    } else {
        densidade_populacional1 = 0;
    }

    if (populacao1 > 0) {
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
    // ÁREA PARA COMPARAÇÃO DAS CARTAS
    // =======================================================
    
    int escolha; // Variável para guardar a opção do menu

    // 1. Mostrar o menu interativo
    printf("\n\n--- HORA DO DUELO! ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    
    // 2. Ler a escolha do jogador (Esse scanf precisa ficar!)
    scanf("%d", &escolha);
    printf("\n--- Resultado da Comparação ---\n");

    // 3. Usar a estrutura 'switch' para tratar a escolha
    switch (escolha) {
        case 1:
            // --- Comparação: População (Maior vence) ---
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
            break; 

        case 2:
            // --- Comparação: Área (Maior vence) ---
            printf("Atributo: Área (km²)\n");
            printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, area2);
            
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            // --- Comparação: PIB (Maior vence) ---
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
            break;

        case 4:
            // --- Comparação: Pontos Turísticos (Maior vence) ---
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, pontos_turisticos1);
            printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, pontos_turisticos2);
            
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            // --- Comparação: Densidade Demográfica (MENOR vence) ---
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, densidade_populacional1);
            printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, densidade_populacional2);
            
            // A lógica invertida (menor ganha)
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            // Tratando escolha inválida
            printf("Erro: Opção inválida! Você devia ter escolhido um número entre 1 e 5.\n");
            break;
    } // Fim do switch

    return 0; // Fim do programa
}