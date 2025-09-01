#include <stdio.h>

int main() {
    // --- Variáveis para a Carta 1 ---
    char estado1[50], codigo_carta1[50], nome_cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // --- Variáveis para a Carta 2 ---
    char estado2[50], codigo_carta2[50], nome_cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // ===================================
    // --- CADASTRO DA CARTA 1 ---
    // ===================================
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // ===================================
    // --- CADASTRO DA CARTA 2 ---
    // ===================================
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // ===================================
    // --- EXIBICAO DOS DADOS ---
    // ===================================
    printf("\n\n--- Cartas Cadastradas ---\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s%s\n", estado1, codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s%s\n", estado2, codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}