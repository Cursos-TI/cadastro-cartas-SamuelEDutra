#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  // Samuel Elias Dutra - Carta Super Trunfo Novato

 // Carta 1 - Declaração de variáveis  
  int população, pontos; // Declaração de variáveis - indicar população e número de pontos turísticos de uma cidade
  char estado, código[3],cidade[30]; // Declaração de variáveis - Uma letra de 'A' a 'H' (representando um dos oito estados),Código da Carta: A letra do estado seguida de um número de 01 a 04, nome da cidade
  float área, PIB; //Declaração de variáveis -  indicar Área (em km²) e PIB da cidade
  

  // Carta 2 - Declaração de variáveis 
  int população2, pontos2; // Declaração de variáveis - indicar população e número de pontos turísticos de uma cidade
  char estado2, código2[3],cidade2[30]; // Declaração de variáveis - Uma letra de 'A' a 'H' (representando um dos oito estados),Código da Carta: A letra do estado seguida de um número de 01 a 04, nome da cidade
  float área2, PIB2; //Declaração de variáveis -  indicar Área (em km²) e PIB da cidade
  
  // Carta 1 -Entrada de dados 
  printf("Jogador favor informar o Estado, letra de A a H para início do jogo:\n");
  scanf(" %c",&estado);
  printf("Jogador favor informar o código de 01 a 04:\n");
  scanf("%s",código);
  printf("Jogador favor informar o nome da cidade:\n");
  scanf(" %[^\n]",&cidade);
  printf("Jogador favor informar a população da cidade:\n");
  scanf("%d",&população);
  printf("Jogador favor informar a Área da cidade em km²:\n");
  scanf("%f",&área);
  printf("Jogador favor informar o PIB da cidade em bilhões de reais:\n");
  scanf("%f",&PIB);
  printf("Jogador favor informar o Número de Pontos Turísticos da cidade\n");
  scanf("%d",&pontos);



    // Carta 2 -Entrada de dados 
  printf("Jogador favor informar o Estado 2, letra de A a H para carta 2 do jogo:\n");
  scanf(" %c",&estado2);
  printf("Jogador favor informar o código de 01 a 04:\n");
  scanf(" %s", código2);
  printf("Jogador favor informar o nome da cidade 2:\n");
  scanf(" %[^\n]",&cidade2);
  printf("Jogador favor informar a população da cidade 2:\n");
  scanf("%d",&população2);
  printf("Jogador favor informar a Área da cidade 2 em km²:\n");
  scanf("%f",&área2);
  printf("Jogador favor informar o PIB da cidade 2 em bilhões de reais:\n");
  scanf("%f",&PIB2);
  printf("Jogador favor informar o Número de Pontos Turísticos da cidade 2\n");
  scanf("%d",&pontos2);


    // Carta 1 -Saída de dados Exibição na tela

  printf("\nCarta 1\n");
  printf("Estado:%c\n",estado);
  printf("Código:%c%s\n",estado,código);

  printf("Nome da cidade:%s\n", cidade);
  printf("População:%d\n",população);
  printf("Área:%.2f km²\n",área);
  printf("PIB:%.2f bilhões de reais\n",PIB);
  printf("Número de Pontos Turísticos:%d\n\n\n",pontos);


      // Carta 2 -Saída de dados Exibição na tela

  printf("Carta 2\n");
  printf("Estado:%c\n",estado2);
  printf("Código:%c%s\n",estado2,código2);
  printf("Nome da cidade:%s\n", cidade2);
  printf("População:%d\n",população2);
  printf("Área:%.2f km²\n",área);
  printf("PIB:%.2f bilhões de reais\n",PIB2);
  printf("Número de Pontos Turísticos:%d\n\n",pontos2);




return 0;
} 
