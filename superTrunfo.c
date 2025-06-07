#include <stdio.h>  // Necessário para as funções de entrada e saída (printf, scanf, fgets)
#include <string.h> // Necessário para a função strcspn (para manipular strings)

int main() {
    // --- Variáveis para a Carta 1 ---
    char estado1;
    char codigo_carta1[5]; // Ex: "A01". 4 caracteres + 1 para o terminador nulo '\0'
    char nome_cidade1[50];
    int populacao1;
    float area1; // Usado float para valores decimais
    float pib1;  // Usado float para valores decimais
    int pontos_turisticos1;

    // --- Variáveis para a Carta 2 ---
    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // --- Entrada de Dados para a Carta 1 ---
    printf("--- Insira os dados para a Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c é importante para consumir qualquer caractere de nova linha pendente.
    // Limpa o buffer de entrada para evitar problemas com a próxima leitura.
    getchar();

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%4s", codigo_carta1); // Lê até 4 caracteres para o código.
    getchar(); // Limpa o buffer.

    printf("Nome da Cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); // Lê a linha completa, incluindo espaços.
    // Remove o caractere de nova linha que fgets pode adicionar ao final da string.
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao1);
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
    scanf("%d", &populacao2);
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

    printf("\n"); // Adiciona uma linha em branco.

    // --- Exibição dos Dados da Carta 1 ---
    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); // %.2f formata o float com duas casas decimais.
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("\n");

    // --- Exibição dos Dados da Carta 2 ---
    printf("--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("\n");

    return 0; // Indica que o programa foi executado com sucesso.
}
