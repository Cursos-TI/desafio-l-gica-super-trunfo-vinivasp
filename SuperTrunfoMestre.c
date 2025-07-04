#include<stdio.h>

int main (){
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1[50], estado2[50];
    char Codigo1[50], Codigo2[50];
    char cidade1[50];
    char cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float PibPerCapita1, PibPerCapita2;
    int pontoTurismo1, pontoTurismo2;
    double SuperPoder1, SuperPoder2;

    
    printf("\n**Olá! Vamos criar duas cartas para o jogo Super Trunfo**\n");
    printf("Vamos inserir os dados da primeira carta.**\n");

    // Código para coleta de dados do usuário para a primeira carta
    printf("Digite o nome do estado - use uma letra de'A' a 'H'. Essa letra vai representar um dos 8 estados: ");
    scanf("%s", estado1);
    printf("Defina um código para esta carta. Use a letra do estado que voce escolheu seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", Codigo1);
    printf("Digite o nome da cidade (Escolha cidade com apenas um nome. Ex: Florianópolis): ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade (Km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (Valor em Bilhões de R$): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontoTurismo1);
    
    //Códgigo para coleta de dados do usuário para a segunda carta
    printf("\nAgora vamos inserir os dados da segunda carta.\n");
    
    printf("Digite o nome do estado - use uma letra de'A' a 'H'. Essa letra vai representar um dos 8 estados: ");
    scanf("%s", estado2);
    printf("Defina um código para esta carta. Use a letra do estado que voce escolheu seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", Codigo2);
    printf("Digite o nome da cidade (Escolha cidade com apenas um nome. Ex: Florianópolis): ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade (Km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (Valor em Bilhões de R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontoTurismo2);
    

    //Calculo para densidade populacional das carta 1e2
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    //Calculo para PIB per capita das cartas 1 e 2
    PibPerCapita1 = (float) pib1 / populacao1;
    PibPerCapita2 = (float) pib2 / populacao2;
    PibPerCapita1 = PibPerCapita1 * 100000000; // Convertendo de Bilhões para reais
    PibPerCapita2 = PibPerCapita2 * 100000000; // Convertendo de Bilhões para reais

    //Cálculo de Super Poderes
    SuperPoder1 =  (populacao1 + area1 + pib1 + pontoTurismo1 + PibPerCapita1 + (1/densidade1));
    SuperPoder2 =  (populacao2 + area2 + pib2 + pontoTurismo2 + PibPerCapita2 + (1/densidade2));


    
    //Mostrando os dados da primeira carta
    printf("\nDados das cartas criadas:\n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontoTurismo1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n\n", PibPerCapita1);

    //Mostrando os dados da segunda carta
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontoTurismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", PibPerCapita2);
   
    // Comparações entre as cartas
    printf("\nPopulação: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", (pontoTurismo1 > pontoTurismo2));
    printf("Densidade populacional: Carta 1 venceu (%d)\n", (densidade1 > densidade2));
    printf("PIB per capita: Carta 1 venceu (%d)\n", (PibPerCapita1 > PibPerCapita2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (SuperPoder1 > SuperPoder2));

}