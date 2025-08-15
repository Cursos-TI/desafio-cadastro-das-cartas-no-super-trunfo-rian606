

#include <stdio.h>

    //trabalho de programação: nivel novato
    //complemento nivel aventureiro

int main(){
    
    
    char codigo[20], codigo2[20]; //codigo (b01, a02, etc)
    char cidade[50], cidade2[50]; //nome da cidade (Curitiba, fortaleza, etc)
    int população, população2; //numero da população (9000000, 8000000, etc)
    float area, area2; //area em km^2
    float pib, pib2; //PIB (produto interno bruto aproximado)
    int turistico, turistico2; //numero de pontos turisticos
    float pibpercapita, pibpercapita2; //valor do pib per capita
    float densidadedemografica, densidadedemografica2; //valor da densidade demografica

    printf("para iniciar nosso jogo, vou listar algumas informações. \n este jogo compara duas cartas, assim sendo apenas digite algumas informações!\n");

    printf("Carta 01: \n Digite o codigo:");
    scanf("%s", &codigo);
    
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


    //Agora a carta 02

    printf("\n\ncarta 02: \n Digite o codigo:");
    scanf("%s", &codigo2);

    printf("digite o nome da cidade sem espaços:");
    scanf("%s", &cidade2);

    printf("digite o numero da população:");
    scanf("%d", &população2);

    printf("digite a area da cidade em km^2:");
    scanf("%f", &area2);

    printf("digite o PIB aproximado em bilhões:");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos:");
    scanf("%d", &turistico2);

    //segundo desafio pib percapita e densidade demogafica

    //pib per capita
    pibpercapita = (float) (1000000000 * pib) / população;
    pibpercapita2 = (float) (1000000000 * pib2) / população2;

    //densidade demografica
    densidadedemografica = (float) população / area;
    densidadedemografica2 = (float) população2 / area2;


    //informações da segunda e da primeira carta serão exibidas aqui

    printf("\n\ncomparare-as!\n");

    printf("carta 01\n codigo: %s\n cidade: %s\n", codigo, cidade);
    printf("populacao: %d\n área: %.2fkm^2\n", população, area);
    printf("PIB: %.2f bilhões de reais\n pontos turisticos: %d\n", pib, turistico);
    printf("densidade populacional: %.2f hab/km^2\n", densidadedemografica);
    printf("pib per capita: %.2f reais\n\n", pibpercapita);

    printf("\n\ncarta 02\n codigo: %s\n cidade: %s\n", codigo2, cidade2);
    printf("populacao: %d\n área: %.2f km^2\n", população2, area2);
    printf("PIB: %.2f bilhões de reais\n pontos turisticos: %d\n", pib2, turistico2);
    printf("densidade populacional: %.2f hab/km^2\n", densidadedemografica2);
    printf("pib per capita: %.2f reais\n\n", pibpercapita2);




    return 0;

}