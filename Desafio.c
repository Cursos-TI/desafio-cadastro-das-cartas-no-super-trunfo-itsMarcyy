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
    float densidadePopulacional1;
    float pibPerCapita1;

    // Carta 2
    char estado2[10];
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    //Carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %s", estado1);

    printf("Digite o codigo da carta 1: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2 da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontosTuristicos1); 

    //Cálculos carta 1
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    //Carta 2

    printf("Digite o estado da carta 2: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2 da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculos carta 2
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Mostrando os dados da carta 1
    printf("\nCarta 1 cadastrada:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);   
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("A densindade Populacional e: %.2f\n", (float)populacao1/area1);
    printf("O PIB per capita e: %.2f\n", pib1/populacao1);

    //Mostrando os dados da carta 2
    printf("\nCarta 2 cadastrada:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("A densindade Populacional e: %.2f\n", (float)populacao2/area2);
    printf("O PIB per capita e: %.2f\n", pib2/populacao2);
}