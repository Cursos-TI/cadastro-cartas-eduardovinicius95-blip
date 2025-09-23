#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Desafio Super Trunfo! \n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variaveis da carta 1
    char estado1;
    char codigo1[5];
    char cidade1[30]; // nomes simples
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
  // Área para entrada de dados

  printf("Digite os dados da Carta 1:\n");
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

  // Área para exibição dos dados da cidade
   printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
return 0;
} 
