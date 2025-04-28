#include <stdio.h>

// Programa que cadastra as cartas com informações sobre cidades.
// Crie um programa que permita ao usuário inserir os dados de duas cartas do SuperTrunfo.
int main()
{
    // Entrada de dados
    char Estado1, Estado2, codigo1[5], codigo2[5], nome_cidade1[15], nome_cidade2[15];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, PIB1, PIB2;
    float densidadePop1, densidadePop2, percapita1, percapita2;

    // Processamento
    printf("Informe duas cartas por vez do Super Trunfo:\n");

    printf("Qual o Estado? (Informe apenas uma letra de 'A' a 'H' ) \n");
    scanf("%c %c", &Estado1, &Estado2);

    printf("Qual o código? (Letra do Estado seguido de um número)\n");
    scanf("%s %s", &codigo1, &codigo2);

    printf("Qual o nome da cidade? \n");
    scanf("%s %s", &nome_cidade1, &nome_cidade2);

    printf("Qual a população? \n");
    scanf("%d %d", &populacao1, &populacao2);

    printf("Qual a área (km²) cidade? \n");
    scanf("%f %f", &area1, &area2);

    printf("Qual o PIB? \n");
    scanf("%f %f", &PIB1, &PIB2);

    printf("Quantos pontos turísticos? \n");
    scanf("%d %d", &pontosTuristicos1, &pontosTuristicos2);

    // Densidade Populacional em km²= (float) população / area
    densidadePop1 = (float) populacao1 / area1;
    densidadePop2 = (float) populacao2 / area2;

    // PIB per capita = PIB / população
    percapita1 = (float)(PIB1 * 1000000000) / populacao1;
    percapita2 = (float)(PIB2 * 1000000000) / populacao2;

    // Saída de dados
    printf("Carta 1: \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s  \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per capita: %.2f reais\n\n", percapita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turíticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per capita: %.2f reais\n", percapita2);
}