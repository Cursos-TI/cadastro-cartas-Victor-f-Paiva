#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[10], estado2[10], codigoDaCarta1[10], codigoDaCarta2[10], cidade1[20], cidade2[20];
  unsigned long int populacao1, populacao2;
  int pontoTuristico1, pontoTuristico2;
  float area1, area2, pib1, pib2;
  float densidadePopulacional1, densidadePopulacional2;
  float pibPerCapta1, pibPerCapta2;
  float superPoder1, superPoder2;

  // Área para entrada de dados
  printf("===== PREENCHA 2 CARTAS =====:\n\n");

  // Dados de entrada da carta 1
  printf("\n\n== CARTA 1 ==\n");
  printf("Digite a sigla do ESTADO da federação em que fica localizado a cidade.\n");
  fgets(estado1, sizeof(estado1), stdin);
  printf("Digite o CÓDIGO DA CARTA (3 caracteres, exemplo: A01, B02,...): \n");
  scanf("%9s", codigoDaCarta1);
  getchar(); //para limpar o buffer do scanf para o proximo fgets
  printf("Digite o nome da CIDADE: \n");
  fgets(cidade1, sizeof(cidade1), stdin);
  printf("Digite a POPULAÇÃO da cidade (número inteiro, exemplo: 50000): \n");
  scanf("%lu", &populacao1);
  printf("Digite a ÁREA da cidade (número real, exemplo: 123.345): \n");
  scanf("%f", &area1);
  printf("Digite o PIB da cidade em BILHÕES(número real, exemplo: 12345.67 bilhoes): \n");
  scanf("%f", &pib1);
  printf("Digite a QUANTIDADE DE PONTOS TURÍSTICOS da cidade (número inteiro): \n");
  scanf("%d", &pontoTuristico1);
  getchar(); //para limpar o buffer do scanf para o proximo fgets
  
  // Dados de entrada da carta 2
  printf("\n\n== CARTA 2 ==\n");
  printf("Digite a sigla do ESTADO da federação em que fica localizado a cidade.\n");
  fgets(estado2, sizeof(estado2), stdin);
  printf("Digite o CÓDIGO DA CARTA (3 caracteres, exemplo: A01, B02,...): \n");
  scanf("%9s", codigoDaCarta2);
  getchar(); //para limpar o buffer do scanf para o proximo fgets
  printf("Digite o nome da CIDADE: \n");
  fgets(cidade2, sizeof(cidade2), stdin);
  printf("Digite a POPULAÇÃO da cidade (número inteiro, exemplo: 50000): \n");
  scanf("%lu", &populacao2);
  printf("Digite a ÁREA da cidade (número real, exemplo: 123.345): \n");
  scanf("%f", &area2);
  printf("Digite o PIB da cidade em BILHÕES(número real, exemplo: 12345.67 bilhoes): \n");
  scanf("%f", &pib2);
  printf("Digite a QUANTIDADE DE PONTOS TURÍSTICOS da cidade (número inteiro): \n");
  scanf("%d", &pontoTuristico2);
  getchar(); //para limpar o buffer do scanf

  //processamento dos dados
  //densidade poplacional
  densidadePopulacional1 = populacao1 / area1;
  densidadePopulacional2 = populacao2 / area2;

  //PIB per capta. o PIB deve ser convertido para bilhoes
  pibPerCapta1 = (pib1*1000000000) / (float)populacao1;
  pibPerCapta2 = (pib2*1000000000) / (float)populacao2;

  /*
  super poder é a soma de todos os atributos numéricos 
  (população, área, PIB, número de pontos turísticos, PIB per capita e 
  o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
  */
  superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontoTuristico1 + pibPerCapta1 - densidadePopulacional1;
  superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontoTuristico2 + pibPerCapta2 - densidadePopulacional2;

  // Área para exibição dos dados da cidade
  //impressão da carta 1 e 2
  printf("\n\nCARTA 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigoDaCarta1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: R$ %.2f \n", pib1);
  printf("Numero de pontos Turisticos: %d\n", pontoTuristico1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapta1);
  
  printf("\n\nCARTA 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f \n", pib2);
  printf("Numero de pontos Turisticos: %d\n", pontoTuristico2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n\n\n", pibPerCapta2);

  /*
  COMPARAÇÃO DAS CARTAS:
  comparação das duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder.
  para a densidade populacional, a carta com o menor valor vence; 
  para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
  */
 printf("Comparação de Cartas: 1= VERDADEIRO e 0= FALSO\n");
 printf("População: Carta 1 venceu = %d\n", populacao1 > populacao2);
 printf("Área: Carta 1 venceu = %d\n", area1 > area2);
 printf("PIB: Carta 1 venceu = %d\n", pib1 > pib2);
 printf("Pontos Turísticos: Carta 1 venceu = %d\n", pontoTuristico1 > pontoTuristico2);
 printf("Densidade Populacional: Carta 2 venceu = %d\n", densidadePopulacional2 < densidadePopulacional1);
 printf("PIB per Capita: Carta 1 venceu = %d\n", pibPerCapta1 > pibPerCapta2);
 printf("Super Poder: Carta 1 venceu = %d\n", superPoder1 > superPoder2);


  
  
return 0;
} 
