#include<stdio.h>

int main (){
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1[50], estado2[50];
    char Codigo1[50], Codigo2[50];
    char cidade1[50];
    char cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTurismo1, pontoTurismo2;

    
    printf("\nOlá! Vamos criar duas cartas para o jogo Super Trunfo. \n Vamos inserir os dados da primeira carta.\n");
    // Código para coleta de dados do usuário para a primeira carta

    printf("Digite o nome do estado - use uma letra de'A' a 'H'. Essa letra vai representar um dos 8 estados: ");
    scanf("%s", estado1);
    printf("Defina um código para esta carta. Use a letra do estado que voce escolheu seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", Codigo1);
    printf("Digite o nome da cidade (Escolha cidade com apenas um nome. Ex: Florianópolis): ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (Km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (Valor em Bilhões de R$): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontoTurismo1);
    //Fim do código para coleta de dados do usuário para a primeira carta

    printf("\nAgora vamos inserir os dados da segunda carta.\n");
    
    printf("Digite o nome do estado - use uma letra de'A' a 'H'. Essa letra vai representar um dos 8 estados: ");
    scanf("%s", estado2);
    printf("Defina um código para esta carta. Use a letra do estado que voce escolheu seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", Codigo2);
    printf("Digite o nome da cidade (Escolha cidade com apenas um nome. Ex: Florianópolis): ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (Km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (Valor em Bilhões de R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontoTurismo2);
    //Fim do código para coleta de dados do usuário para a segunda carta

    //Mostrando os dados da primeira carta
    printf("\nDados das cartas criadas:\n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontoTurismo1);

    //Mostrando os dados da segunda carta
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontoTurismo2);

}