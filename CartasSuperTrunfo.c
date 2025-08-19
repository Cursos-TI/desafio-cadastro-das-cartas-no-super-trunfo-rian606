
#include <stdio.h>

    //trabalho de programação: nivel novato
    //nivel aventureiro
    //nivel mestre

int main(){
    
    
    char codigo[20], codigo2[20]; //codigo (b01, a02, etc)
    char cidade[50], cidade2[50]; //nome da cidade (Curitiba, fortaleza, etc)
    unsigned long int população, população2; //numero da população (9000000, 8000000, etc)
    float area, area2; //area em km^2SW
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
    scanf("%lu", &população);

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
    scanf("%lu", &população2);

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

    // adicionarei resultados
    int resultadoPopulacao = população > população2;
    int resultadoArea = area > area2;
    int resultadoPIB = pib > pib2;
    int resultadoTuristico = turistico > turistico2;
    int resultadoPIBpercapita = pibpercapita > pibpercapita2;
    int resultadoDensidadeDemografica = (1 / densidadedemografica) < (1 / densidadedemografica2);

    //super poder carta 1 e 2
    unsigned long int poderCarta1 = população + area + pib + turistico + pibpercapita + (1 / densidadedemografica);
    unsigned long int poderCarta2 = população2 + area2 + pib2 + turistico2 + pibpercapita2 + (1 / densidadedemografica2);



    //retirei a exibicao das cartas, e adicionarei os resultados e o super poder

    printf("para os resultados usaremos 1 se a carta 1 vencer e 0 se a carta 2 vencer!\n");
    printf("População: %d\n", resultadoPopulacao);
    printf("Area: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPIB);
    printf("Turistico: %d\n", resultadoTuristico);
    printf("Renda per capita: %d\n", resultadoPIBpercapita);
    printf("Densidade populacional: %d\n", resultadoDensidadeDemografica);
    printf("SuperPoder: %d\n", poderCarta1 > poderCarta2);





    return 0;

}