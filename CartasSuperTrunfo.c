#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char Estado1, Estado2, codigo1[5], codigo2[5], nome_cidade1[15], nome_cidade2[15];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, PIB1, PIB2;


    printf("Informe duas cartas do Super Trunfo:\n");

    printf("Qual o Estado? (Informe apenas uma letra de 'A' a 'H' ) \n");
    scanf("%c %c", &Estado1, &Estado2);

    printf("Qual o código? (Letra do Estado seguido de um número)\n");
    scanf("%s %s", &codigo1, &codigo2);

    printf("Qual o nome da cidade? \n");
    scanf("%s %s", &nome_cidade1, &nome_cidade2);

    printf("Qual a população? \n");
    scanf("%d %d", &populacao1, &populacao2);

    printf("Qual a área(km²) cidade? \n");
    scanf("%f %f", &area1, &area2);

    printf("Qual o PIB? \n");
    scanf("%f %f", &PIB1, &PIB2);

    printf("Quantos pontos turísticos? \n");
    scanf("%d %d", &pontosTuristicos1, &pontosTuristicos2);

    printf("Carta 1: \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s  \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d \n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turíticos: %d\n",pontosTuristicos2);

    return 0;
}
