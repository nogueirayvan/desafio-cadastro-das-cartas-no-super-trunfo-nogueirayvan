#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
  char estado1[20], estado2[20];
  char codigoCarta1[20], codigoCarta2[20];
  char nomeCidade1[20], nomeCidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densiPopulacional1, densiPopulacional2;
  float pibCapita1, pibCapita2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
  printf("Carta 1 \n");
  printf("Digite estado: ");
  scanf("%s", &estado1);

  printf ("Digite codigo da carta:  ");
  scanf ("%s", codigoCarta1);

  printf ("Digite nome da cidade: ");
  scanf ("%s", &nomeCidade1);

  printf("Digite a populacao: ");
  scanf ("%d", &populacao1);

  printf ("Digite a area:  ");
  scanf ("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite quantidade pontos turisticos: ");
  scanf ("%d", &pontosTuristicos1);

  densiPopulacional1 = populacao1/area1;
  pibCapita1 = pib1/populacao1;
    
    // Segunda carta.
    
  printf("Carta 2 \n");
  printf("Digite estado: ");
  scanf("%s", &estado2);

  printf ("Digite codigo da carta:  ");
  scanf ("%s", codigoCarta2);

  printf ("Digite nome da cidade: ");
  scanf ("%s", &nomeCidade2);

  printf("Digite a populacao: ");
  scanf ("%d", &populacao2);

  printf ("Digite a area:  ");
  scanf ("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite quantidade pontos turisticos: ");
  scanf ("%d", &pontosTuristicos2);

  densiPopulacional2 = populacao2/area2;
  pibCapita2 = pib2/populacao2;

  printf ("\n\n\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
  printf("Carta 1\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigoCarta1);
  printf("Nome: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos turisticos: %d\n", pontosTuristicos1);
  printf("Densidade populacional: %.2f habitantes por kilometro quadrado. \n", densiPopulacional1);
  printf("PIB per capita: %.2f reais.\n\n", pibCapita1);

  printf("Carta 2\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigoCarta2);
  printf("Nome: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turisticos: %d\n", pontosTuristicos2);
  printf("Densidade populacional: %.2f habitantes por kilometro quadrado. \n", densiPopulacional2);
  printf("PIB per capita: %.2f reais. \n", pibCapita2);
    
  return 0;
}
