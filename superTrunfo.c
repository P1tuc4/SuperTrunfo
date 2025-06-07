#include <stdio.h>  // Necessário para as funções de entrada e saída (printf, scanf, fgets)
#include <string.h> // Necessário para a função strcspn (para manipular strings)

int main() {
    // --- Variáveis para a Carta 1 ---
    char estado1;
    char codigo_carta1[5]; // Ex: "A01". 4 caracteres + 1 para o terminador nulo '\0'
    char nome_cidade1[50];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;                  // Usado float para valores decimais
    float pib1;                   // Usado float para valores decimais (em bilhões de reais)
    int pontos_turisticos1;
    float densidade_populacional1; // Variável para densidade populacional
    float pib_per_capita1;         // Variável para PIB per capita
    float super_poder1;            // Nova variável para o Super Poder

    // --- Variáveis para a Carta 2 ---
    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // --- Entrada de Dados para a Carta 1 ---
    printf("--- Insira os dados para a Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    getchar(); // Limpa o buffer de entrada

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%4s", codigo_carta1);
    getchar(); // Limpa o buffer.

    printf("Nome da Cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%lu", &populacao1); // %lu para unsigned long int
    getchar(); // Limpa o buffer.

    printf("Area (em km²): ");
    scanf("%f", &area1);
    getchar(); // Limpa o buffer.

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    getchar(); // Limpa o buffer.

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar(); // Limpa o buffer.

    // --- Calculos para a Carta 1 ---
    densidade_populacional1 = (float)populacao1 / area1; // Conversão explícita para float
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1; // Multiplica por 1 bilhão para ter o valor total do PIB
                                                           // O '.0f' garante que a multiplicação seja float.

    // Cálculo do Super Poder para a Carta 1
    // Inverso da densidade populacional: 1.0f / densidade_populacional1 (para evitar divisão por zero, caso area1 seja 0)
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);

    printf("\n"); // Adiciona uma linha em branco para melhor visualização.

    // --- Entrada de Dados para a Carta 2 ---
    printf("--- Insira os dados para a Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Codigo da Carta (Ex: B02): ");
    scanf("%4s", codigo_carta2);
    getchar();

    printf("Nome da Cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%lu", &populacao2); // %lu para unsigned long int
    getchar();

    printf("Area (em km²): ");
    scanf("%f", &area2);
    getchar();

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    getchar();

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    getchar();

    // --- Calculos para a Carta 2 ---
    densidade_populacional2 = (float)populacao2 / area2; // Conversão explícita para float
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Cálculo do Super Poder para a Carta 2
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

    printf("\n"); // Adiciona uma linha em branco.

    // --- Exibição dos Dados Completos da Carta 1 ---
    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1); // %lu para unsigned long int
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    printf("\n");

    // --- Exibição dos Dados Completos da Carta 2 ---
    printf("--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2); // %lu para unsigned long int
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    printf("\n");

    // --- Comparações e Exibição dos Resultados ---
    printf("Comparacao de Cartas:\n");

    // Comparação de População (maior vence)
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2 ? 1 : 0));

    // Comparação de Área (maior vence)
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2 ? 1 : 0));

    // Comparação de PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2 ? 1 : 0));

    // Comparação de Pontos Turísticos (maior vence)
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2 ? 1 : 2), (pontos_turisticos1 > pontos_turisticos2 ? 1 : 0));

    // Comparação de Densidade Populacional (MENOR vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2 ? 1 : 2), (densidade_populacional1 < densidade_populacional2 ? 1 : 0));

    // Comparação de PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2 ? 1 : 2), (pib_per_capita1 > pib_per_capita2 ? 1 : 0));

    // Comparação de Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2 ? 1 : 2), (super_poder1 > super_poder2 ? 1 : 0));

    return 0; // Indica que o programa foi executado com sucesso.
}