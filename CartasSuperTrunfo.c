#include <stdio.h>

int main() {
   #include <stdio.h>
   
    int população1, população2, turísticos1, turísticos2;
    float área1, área2, PIB1, PIB2;
    char Estado1, Estado2, Código1 [3], Código2[3], cidade1[30], cidade2[30];
  
    printf("\nCarta 1\n");
   
    printf("Digite uma letra de A até H:\n");
   
    printf("Estado:\n");
    scanf("%s", &Estado1);

    printf("Código da cidade:\n");
    scanf("%s", &Código1);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("População:\n");
    scanf("%d", &população1);

    printf("Área da cidade:\n");
    scanf("%f", &área1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &turísticos1);

    printf("\nCarta 2\n");

    printf("Digite uma letra de A até H:\n");
   
    printf("Estado:\n");
    scanf("%s", &Estado2);

    printf("Código da cidade:\n");
    scanf("%s", &Código2);

    printf("Nome da Cidade:\n");
    scanf("%s", &cidade2);

    printf("População:\n");
    scanf("%d", &população2);

    printf("Área da cidade:\n");
    scanf("%f", &área2);

    printf("PIB:\n");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turísticos2);

    return 0;

}
