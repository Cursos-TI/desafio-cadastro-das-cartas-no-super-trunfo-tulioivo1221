#include <stdio.h>

int main () {
    int populacao1, populacao2, turisticos1, turisticos2;
    float area1, area2, PIB1, PIB2;
    char estado1, estado2, codigo1, codigo2, cidade1[30], cidade2[30];
    float densidadePopulacional1, densidadePopulacional2, PIBpercapita1, PIBpercapita2;

      //CARTA 1
     
    printf("\nCarta 1\n");
   
    printf("Digite uma letra de A até H:\n");
   
    printf("Estado:\n");
    scanf("%s", &estado1);

    printf("Código da cidade:\n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área da cidade:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &turisticos1);

    densidadePopulacional1 = (float) populacao1 / area1;
    PIBpercapita1 = PIB1 / (float) populacao1;

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1); 
     
    printf("PIB per Capita: %.2f reais\n", PIBpercapita1);
    
      //CARTA 2
    
    printf("\nCarta 2\n");

    printf("Digite uma letra de A até H:\n");
   
    printf("Estado:\n");
    scanf("%s", &estado2);

    printf("Código da cidade:\n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade:\n");
    scanf("%s", &cidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área da cidade:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos2);
    
    densidadePopulacional2 = (float) populacao2 / area2;
    PIBpercapita2 = PIB2 / (float) populacao2;

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2); 
     
    printf("PIB per Capita: %.2f reais\n", PIBpercapita2);

    return 0;

}
