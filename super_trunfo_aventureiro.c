#include <stdio.h>

int main() {
    // ====== Declaração de variáveis ======
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // ====== Leitura dos dados ======
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ====== Cálculos ======
    // Densidade populacional = população / área
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    // PIB per capita = (PIB * 1.000.000.000) / população
    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Super Poder = soma de todos os atributos numéricos + 1/densidade
    float superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    float superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // ====== Exibição dos dados das cartas ======
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ====== Comparação das cartas ======
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
