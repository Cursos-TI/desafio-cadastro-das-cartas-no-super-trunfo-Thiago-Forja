#include <stdio.h>
#include <strings.h>

int main(){
   
    // CARTA 1
    char estado;
    char carta [4];
    char cidade [25];
    int pontos_turisticos;
    float PIB, area,densidade_populacional, PIB_per_capita, superpoder;
    unsigned long int populacao;


    // CARTA 2
    
    char estado2;
    char carta2 [4];
    char cidade2 [25];
    int pontos_turisticos2;
    float PIB2, area2, densidade_populacional2, PIB_per_capita2, superpoder2;
    unsigned long int populacao2;

   // Carta 1:
//  Estado: B
//  Código: B01
//  Nome da Cidade: Jacobina
//  População: 12325000
//  Área: 1521.11 km²
//  PIB: 699.28 bilhões de reais
//  Número de Pontos Turísticos: 10
//  Densidade Populacional: 8102.47 hab/km²
//  PIB per Capita: 56724.32 reais

    // Carta 2:
//  Estado: M
//  Código: M02
//  Nome da Cidade: Governador Valadares
//  População: 6748000
//  Área: 1200.25 km²
//  PIB: 300.50 bilhões de reais
//  Número de Pontos Turísticos: 30
//  Densidade Populacional: 5622.24 hab/km²
//  PIB per Capita: 44532.91 reais

    printf("Digite o Estado:\n");
    scanf("%c", &estado);

    printf("Digite o Código da Carta: \n");
    scanf ("%s", carta);

    printf("Digite a Cidade:\n");
    getchar(); // consome o '\n' remanescente
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área em km²:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = populacao / area;
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional );
    
    PIB_per_capita = PIB * 1e9 / populacao;
    printf("Pib Per Capita: R$ %.2f Reais\n", PIB_per_capita );

    superpoder = (float) populacao + area + PIB + pontos_turisticos + PIB_per_capita + (1/densidade_populacional);
    printf("Super Poder é: %.2f\n", superpoder);


    // CARTA 2

    printf ("Digite o Estado: \n");
    scanf (" %c", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf ("%s", carta2);

    printf("Digite a Cidade:\n");
    getchar(); // consome o '\n' remanescente
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área em km²:\n");
    scanf("%f", &area2);

     printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    
    densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f Hab/km²\n", densidade_populacional2 );
    
    PIB_per_capita2 = PIB2 * 1e9 / populacao2;
    printf("Pib Per Capita: R$ %.2f Reais\n", PIB_per_capita2  );

    superpoder2 = (float) populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 + (1/densidade_populacional2);
    printf("Super Poder é: %.2f\n", superpoder2);

    /////////////////////////////////////////////////////////////

    printf("\n\n---INFORMAÇÕES DOS DADOS--- \n");
	printf("CARTA 1\n");
	printf("Estado: %c\n", estado);  
    printf("Codigo: %s\n", carta );
    printf("Cidade: %s\n", cidade );
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", PIB);
    printf("Pontos Turisticos: %d\n", pontos_turisticos );
    printf("Densidade Populacional:%.2f\n", densidade_populacional);
    printf("PIB Per Capital: %.2f \n", PIB_per_capita);
    
   
    ///////////////////////////////////////////////////////////////

 printf("\n\n---INFORMAÇÕES DOS DADOS--- \n");
	printf("CARTA 2\n");
	printf("Estado: %c\n", estado2);  
    printf("Codigo: %s\n", carta2 );
    printf("Cidade: %s\n", cidade2 );
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2 );
    printf("Densidade Populacional:%.2f\n", densidade_populacional2);
    printf("PIB Per Capital: %.2f \n", PIB_per_capita2);
   
    // COMPARAÇÕES DAS CARTAS

      
    printf("\n=== Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu) ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao2 > populacao2 ? 1 : 0);
    printf("Área: Carta 1 venceu (%d)\n ", area > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n ", PIB > PIB2 ? 1 : 0);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos > pontos_turisticos2 ? 1 : 0);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade_populacional < densidade_populacional2 ? 1 : 0);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_per_capita > PIB_per_capita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder > superpoder2 ? 1 : 0);


    

    return 0;
    
}