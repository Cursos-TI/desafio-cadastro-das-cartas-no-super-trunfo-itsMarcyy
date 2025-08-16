#include <stdio.h>

int main() {
    // Carta 1
    char estado1 [10];
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2[10];
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %s", estado1);

    printf("Digite o codigo da carta 1: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1); 

    //carta 2

    printf("Digite o estado da carta 2: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Mostrando os dados da carta 1
    printf("\nCarta 1 cadastrada:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);   
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    //Mostrando os dados da carta 2
    printf("\nCarta 2 cadastrada:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

}