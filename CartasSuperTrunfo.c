#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


#include <stdio.h>

int main(){
   
    // CARTA 1
    char estado;
    char carta [4];
    char cidade [25];
    int populacao, pontos_turisticos;
    float PIB, area;

    // CARTA 2
    char estado2;
    char carta2 [4];
    char cidade2 [25];
    int populacao2, pontos_turisticos2;
    float PIB2, area2;

    // --- Entrada Carta 1 ---
    printf ("Digite o Estado: \n");
    scanf (" %c", &estado);

    printf("Digite o Código da Carta: \n");
    scanf ("%s", carta);

    printf("Digite a Cidade:\n");
    scanf ("%s", cidade);

    printf("Digite a População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área em km²:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);

    // --- Entrada Carta 2 ---
    printf ("\nDigite o Estado: \n");
    scanf (" %c", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf ("%s", carta2);

    printf("Digite a Cidade:\n");
    scanf ("%s", cidade2);

    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // --- Saída dos Dados ---
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;  
}
