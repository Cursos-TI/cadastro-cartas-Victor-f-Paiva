#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[10], estado2[10], codigoDaCarta1[10], codigoDaCarta2[10], cidade1[20], cidade2[20];
  int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
  float area1, area2, pib1, pib2;


  // Área para entrada de dados
  printf("===== PREENCHA 2 CARTAS =====:\n\n");

  // Dados de entrada da carta 1
  printf("\n\n== CARTA 1 ==\n");
  printf("Digite o nome da CIDADE. NÃO use cidades que tenha mais de uma palavra!: \n");
  scanf("%19s", cidade1);
  printf("Digite a sigla do ESTADO da federação em que fica localizado a cidade.\n");
  scanf("%9s", estado1);
  printf("Digite o CÓDIGO DA CARTA (3 caracteres, exemplo: A01, B02,...): \n");
  scanf("%9s", codigoDaCarta1);
  printf("Digite a POPULAÇÃO da cidade (número inteiro, exemplo: 50000): \n");
  scanf("%d", &populacao1);
  printf("Digite a ÁREA da cidade (número real, exemplo: 123.345): \n");
  scanf("%f", &area1);
  printf("Digite o PIB da cidade (número real, exemplo: 12345.67): \n");
  scanf("%f", &pib1);
  printf("Digite a QUANTIDADE DE PONTOS TURÍSTICOS da cidade (número inteiro): \n");
  scanf("%d", &pontoTuristico1);
  
  // Dados de entrada da carta 2
  printf("== CARTA 2 ==\n");
  printf("Digite o nome da CIDADE. NÃO use cidades que tenha mais de uma palavra!: \n");
  scanf("%19s", cidade2);
  printf("Digite a sigla do ESTADO da federação em que fica localizado a cidade.\n");
  scanf("%9s", estado2);
  printf("Digite o CÓDIGO DA CARTA (3 caracteres, exemplo: A01, B02,...): \n");
  scanf("%9s", codigoDaCarta2);
  printf("Digite a POPULAÇÃO da cidade (número inteiro, exemplo: 50000): \n");
  scanf("%d", &populacao2);
  printf("Digite a ÁREA da cidade (número real, exemplo: 123.345): \n");
  scanf("%f", &area2);
  printf("Digite o PIB da cidade (número real, exemplo: 12345.67): \n");
  scanf("%f", &pib2);
  printf("Digite a QUANTIDADE DE PONTOS TURÍSTICOS da cidade (número inteiro): \n");
  scanf("%d", &pontoTuristico2);


  // Área para exibição dos dados da cidade
  //impressão da carta 1 e 2
  printf("\n\nCARTA 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigoDaCarta1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: R$ %.2f \n", pib1);
  printf("Numero de pontos Turisticos: %d\n", pontoTuristico1);

  printf("\n\nCARTA 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f \n", pib2);
  printf("Numero de pontos Turisticos: %d\n", pontoTuristico2);


return 0;
} 
