#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    /* Objetivo inicial:
    Criar cartas representando cidades, contendo as seguintes propriedades:
    
    Nome da cidade: char[]
    População: int
    Área: float
    PIB: float
    Número de pontos turísticos: int*/

    //carta 1
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //carta 2
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    //cadastro com os dados da primeira carta
    printf("-----------Cadastro - CARTA 1----------- \n \n");
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a população total: \n");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);
    printf("digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    //SAÍDA DE DADOS DA PRIMEIRA CARTA
    printf("------DADOS DA CARTA 1------ \n -Cidade: %s  \n -Populacao: %d \n -Area: %f \n -PIB: %f \n -Pontos turisticos: %d \n \n", cidade1,populacao1,area1,pib1,pontos_turisticos1);



    //cadastro com os dados da segunda carta
    printf("-----------Cadastro - CARTA 2-----------\n \n");
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população total: \n");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);
    printf("digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    //DADOS DE SAIDA DA SEGUNDA CARTA
    printf("------DADOS DA CARTA 2------  \n -Cidade: %s  \n -Populacao: %d \n -Area: %f \n -PIB: %f \n -Pontos turisticos: %d \n \n", cidade2,populacao2,area2,pib2,pontos_turisticos2);
    return 0;
}
