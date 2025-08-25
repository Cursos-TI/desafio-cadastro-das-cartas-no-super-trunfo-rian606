
#include <stdio.h>

    //trabalho de programação: nivel novato
    //nivel aventureiro
    //nivel mestre
    //ultimo nivel de logica

int main(){
    
    
    char codigo[20], codigo2[20]; //codigo (b01, a02, etc)
    char cidade[50], cidade2[50]; //nome da cidade (Curitiba, fortaleza, etc)
    unsigned long int população, população2; //numero da população (9000000, 8000000, etc)
    float area, area2; //area em km^2
    float pib, pib2; //PIB (produto interno bruto aproximado)
    int turistico, turistico2; //numero de pontos turisticos
    float pibpercapita, pibpercapita2; //valor do pib per capita
    float densidadedemografica, densidadedemografica2; //valor da densidade demografica
    int opcao, opcao2, opcao3;
    int resultado1, resultado2;

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

    printf("vamos aos resultados!\n");
    // desafio logica novato

    //primeiro as informações

    printf("População\n Carta 1 - %s: %lu / Carta 2 - %s: %lu\n", cidade, população, cidade2, população2);
    
    if(população > população2){
        printf("carta 1 venceu! %s\n\n", cidade);
    }else printf("carta 2 venceu! %s\n\n", cidade2);//comparacao e escolha do vencedor

    printf("area\n Carta 1 - %s: %2.f / Carta 2 - %s: %2.f\n", cidade, area, cidade2, area2);
    if(area > area2){
        printf("carta 1 venceu! %s\n\n", cidade);
    }else printf("carta 2 venceu! %s\n\n", cidade2);

    printf("PIB\n Carta 1 - %s: %2.f / Carta 2 - %s: %2.f\n", cidade, pib, cidade2, pib2);
    if(pib > pib2){
        printf("carta 1 venceu! %s\n\n", cidade);
    }else printf("carta 2 venceu! %s\n\n", cidade2);

    printf("turistico\n Carta 1 - %s: %d / Carta 2 - %s: %d\n", cidade, turistico, cidade2, turistico2);
    if(turistico > turistico2){
        printf("carta 1 venceu! %s\n\n", cidade);
    }else printf("carta 2 venceu! %s\n\n", cidade2);

    printf("renda per capita\n Carta 1 - %s: %2.f /  Carta 2 - %s: %2.f\n", cidade, pibpercapita, cidade2, pibpercapita2);
    if(pibpercapita > pibpercapita2){
        printf("carta 1 venceu! %s\n\n", cidade);
    }else printf("carta 2 venceu! %s\n\n", cidade2);

    printf("densidade demografica\n Carta 1 - %s: %2.f /  Carta 2 - %s: %2.f\n", cidade, densidadedemografica, cidade2, densidadedemografica2);
    if(densidadedemografica < densidadedemografica2){
        printf("carta 1 venceu! %s\n\n", cidade);
    }else printf("carta 2 venceu! %s\n\n", cidade2);

    printf("super poder\n Carta 1 - %s: %d / Carta 2 - %s: %d\n", cidade, poderCarta1, cidade2, poderCarta2);
    if(poderCarta1 > poderCarta2){
        printf("carta 1 venceu! %s\n\n", cidade);
    }else printf("carta 2 venceu! %s\n\n", cidade2);

   //escolha de atributo para comparacao

   printf("** AGORA VAMOS AO JOGO **\n");
   printf("- Escolha a comparacao que deseja fazer!\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de pontos turísticos\n");
   printf("5. Densidade demográfica\n");
   printf("escolha uma opção!\n");
   scanf("%d", &opcao);

   switch (opcao)
   {
   case 1:
    if(população > população2){
        printf("Nome: %s X %s\nPopulação: %lu X %lu\nVencedor: Carta 1\n", cidade, cidade2, população, população2);
    }else if(população < população2){
        printf("Nome: %s X %s\nPopulação: %lu X %lu\nVencedor: Carta 2\n", cidade, cidade2, população, população2);
    }else{
        printf("Nome: %s X %s\nPopulação: %lu X %lu\n Empate!\n", cidade, cidade2, população, população2);
    }
    
    break;

    case 2:
    if(area > area2){
        printf("Nome: %s X %s\nÁrea: %.2f X %.2f\nVencedor: Carta 1\n", cidade, cidade2, area, area2);
    }else if(area < area2){
        printf("Nome: %s X %s\nÁrea: %.2f X %.2f\nVencedor: Carta 2\n", cidade, cidade2, area, area2);
    }else{
        printf("Nome: %s X %s\nÁrea: %.2f X %.2f\n Empate!\n", cidade, cidade2, area, area2);
    }

    break;

    case 3:
    if(pib > pib2){
        printf("Nome: %s X %s\nPIB: %.2f X %.2f\nVencedor: Carta 1\n", cidade, cidade2, pib, pib2);
    }else if(pib < pib2){
        printf("Nome: %s X %s\nPIB: %.2f X %.2f\nVencedor: Carta 2\n", cidade, cidade2, pib, pib2);
    }else{
        printf("Nome: %s X %s\nPIB: %.2f X %.2f\n Empate!\n", cidade, cidade2, pib, pib2);
    }

    break;

    case 4:
    if(turistico > turistico2){
        printf("Nome: %s X %s\nPontos turisticos: %d X %d\nVencedor: Carta 1\n", cidade, cidade2, turistico, turistico2);
    }else if(turistico < turistico2){
        printf("Nome: %s X %s\nPontos turisticos: %d X %d\nVencedor: Carta 2\n", cidade, cidade2, turistico, turistico2);
    }else{
        printf("Nome: %s X %s\nPontos turisticos: %d X %d\n Empate!\n", cidade, cidade2, turistico, turistico2);
    }

    break;

    case 5:
    if(densidadedemografica < densidadedemografica2){
        printf("Nome: %s X %s\nDensidade demografica: %.2f X %.2f\nVencedor: Carta 1\n", cidade, cidade2, densidadedemografica, densidadedemografica2);
    }else if(densidadedemografica > densidadedemografica2){
        printf("Nome: %s X %s\nDensidade demografica: %.2f X %.2f\nVencedor: Carta 2\n", cidade, cidade2, densidadedemografica, densidadedemografica2);
    }else{
        printf("Nome: %s X %s\nDensidade demografica: %.2f X %.2f\n Empate!\n", cidade, cidade2, densidadedemografica, densidadedemografica2);
    }
    break;

    default:
    break;
    printf("Opção não encontrada!");
   }

   //agora nivel mestre usando habilidades aprendidas
   printf("Agora uma comparacao entre dois atributos!\nCarta 1\n");
   printf("escolha dois atributos diferentes para comparar:\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de pontos turísticos\n");
   printf("5. Densidade demográfica\n");
   printf("escolha uma opção!\n");
   scanf("%d", &opcao2);

   switch (opcao2)
   {
   case 1:
   printf("voce escolheu população!\n");
    resultado1 = população > população2 ? 1 : 0; 
    break;

    case 2:
    printf("voce escolheu area!\n");
    resultado1 = area > area2 ? 1 : 0;
    break;

    case 3:
    printf("voce escolheu PIB!\n");
    resultado1 = area > area2 ? 1 :0;
    break;
    case 4:
    printf("voce escolheu pontos turisticos!\n");
    resultado1 = turistico > turistico2 ? 1 : 0;
    break;

    case 5:
    printf("voce escolheu densidade demografica!\n");
    resultado1 = densidadedemografica < densidadedemografica2 ? 1 : 0;
    break;
   
   default:
   printf("opção invalida!\n");
    break;
   }

   printf("Segundo atributo!");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de pontos turísticos\n");
   printf("5. Densidade demográfica\n");
   printf("escolha uma opção!\n");
   scanf("%d", &opcao3);

   if(opcao2 == opcao3){
    printf("atributos iguais!\n");
   }else{
    switch (opcao3)
    {
    case 1:
    printf("voce escolheu população!\n");
    resultado1 = população > população2 ? 1 : 0;
    break;

    case 2:
    printf("voce escolheu area!\n");
    resultado2 = area > area2 ? 1 : 0;
    break;

    case 3:
    printf("voce escolheu PIB!\n");
    resultado2 = area > area2 ? 1 :0;
    break;

    case 4:
    printf("voce escolheu pontos turisticos!\n");
    resultado2 = turistico > turistico2 ? 1 : 0;
    break;

    case 5:
    printf("voce escolheu densidade demografica!\n");
    resultado2 = densidadedemografica < densidadedemografica2 ? 1 : 0;
    break;
    
    default:
    printf("opção invalida!\n");
        break;
    }}

    if(resultado1 && resultado2){
        printf("carta 1 venceu!\n");
    }else if(resultado1 != resultado2){
        printf("Empate\n");
    }else{
        printf("carta 2 venceu!\n");
    }
   




    return 0;

}