#include <stdio.h>

    int main() {

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    printf("=== Carta 01 ===\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código: ");
    scanf("%s", &codigo1);

    printf("Digite a cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Total de pontos turísticos: ");
    scanf("%d", &pontos1);

    
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

 
    return 0;
}