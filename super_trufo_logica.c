#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
} Carta;

// Função para calcular densidade populacional e PIB per capita
void calcularIndicadores(Carta *carta) {
    carta->densidade = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Função para exibir os dados da carta
void exibirCarta(Carta carta) {
    printf("Carta: %s (%s)\n", carta.nome, carta.estado);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", carta.densidade);
    printf("PIB per capita: %.2f\n", carta.pib_per_capita);
    printf("--------------------------\n");
}

int main() {
    Carta carta1, carta2;

    // Cadastro das cartas pelo usuário
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Código da carta: ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Código da carta: ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Calcula indicadores
    calcularIndicadores(&carta1);
    calcularIndicadores(&carta2);

    // Exibe cartas
    printf("\nDados das cartas:\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    // Comparação: atributo escolhido diretamente no código
    // Exemplo: comparar População
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
