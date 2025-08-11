
#include <stdio.h>

    //trabalho de programação: nivel novato

int main(){
    
    char estado[50], estado2[50]; //nome do estado (Ceará, Paraná, etc)
    char codigo[20], codigo2[20]; //codigo (b01, a02, etc)
    char cidade[50], cidade2[50]; //nome da cidade (Curitiba, fortaleza, etc)
    int população, população2; //numero da população (9000000, 8000000, etc)
    float area, area2; //area em km^2
    float pib, pib2; //PIB (produto interno bruto aproximado)
    int turistico, turistico2; //numero de pontos turisticos

    printf("para iniciar nosso jogo, vou listar algumas informações. \n este jogo compara duas cartas, assim sendo apenas digite algumas informações!\n");

    printf("Carta 01: \n Digite o nome do estado sem espaços:");
    scanf("%s", &estado);
    
    printf("digite o nome da cidade sem espaços:");
    scanf("%s", &cidade);

    printf("digite o valor da população:");
    scanf("%d", &população);

    printf("digite a area da cidade:");
    scanf("%f", &area);

    printf("digite o PIB aproximado:");
    scanf("%f", &pib);

    printf("numero de pontos turisticos:");
    scanf("%d", &turistico);

    //informações da primeira carta serão exibidas aqui

    printf("\n\ncarta 01\n estado: %s\n cidade: %s\n", estado, cidade);
    printf("populacao: %d\n área: %.2fkm^2\n", população, area);
    printf("PIB: %.2f\n pontos turisticos: %d\n", pib, turistico);

    //Agora a carta 02

    printf("\n\ncarta 02: \n Digite o nome do estado sem espaços:");
    scanf("%s", &estado2);

    printf("digite o nome da cidade sem espaços:");
    scanf("%s", &cidade2);

    printf("digite o numero da população:");
    scanf("%d", &população2);

    printf("digite a area da cidade:");
    scanf("%f", &area2);

    printf("digite o PIB aproximado:");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos:");
    scanf("%d", &turistico2);

    //informações da segunda e da primeira carta serão exibidas aqui

    printf("\n\ncomparare-as!");

    printf("\n\ncarta 02\n estado: %s\n cidade: %s\n", estado2, cidade2);
    printf("populacao: %d\n área: %.2f\n", população2, area2);
    printf("PIB: %.2f\n pontos turisticos: %d\n\n\n", pib2, turistico2);


    printf("carta 01\n estado: %s\n cidade: %s\n", estado, cidade);
    printf("populacao: %d\n área: %.2fkm^2\n", população, area);
    printf("PIB: %.2f\n pontos turisticos: %d\n", pib, turistico);


    return 0;

}