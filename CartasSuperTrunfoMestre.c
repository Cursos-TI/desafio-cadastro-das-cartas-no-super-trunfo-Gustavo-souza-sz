#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre - Comparação + Super Poder

int main() {
    // --- Carta 1 ---
    char codigo1[4];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1;
    float densidade1, pibPerCapita1, superPoder1;

    printf("Cadastro da Carta 1\n");
    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // --- Carta 2 ---
    char codigo2[4];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2, superPoder2;

    printf("\nCadastro da Carta 2\n");
    printf("Digite o codigo da cidade (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // --- Exibição das Cartas ---
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.6f bilhoes/habitante\n", pibPerCapita1);
    printf("Super Poder: %.6f\n", superPoder1);

    printf("\n===== Dados da Carta 2 =====\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.6f bilhoes/habitante\n", pibPerCapita2);
    printf("Super Poder: %.6f\n", superPoder2);

    // --- Comparação ---
    printf("\n===== Comparacao =====\n");
    printf("Populacao: %d\n", (populacao1 > populacao2));
    printf("Area: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos Turisticos: %d\n", (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2)); // menor vence
    printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: %d\n", (superPoder1 > superPoder2));

    return 0;
}