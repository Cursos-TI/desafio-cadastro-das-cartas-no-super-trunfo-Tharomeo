#include <stdio.h>

int main(){
    int populacaoCarta1, pontoTuristicoCarta1, populacaoCarta2, pontoTuristicoCarta2;
    float areaCidadeCarta1, pibCarta1, areaCidadeCarta2, pibCarta2, densidadePopulacionalCarta1, densidadePopulacionalCarta2, pibCapitaCarta1, pibCapitaCarta2;
    char codigoEstadoCarta1[2], codigoCarta1[4], nomeCidadeCarta1[50], codigoEstadoCarta2[2], codigoCarta2[4], nomeCidadeCarta2[50];

    printf("Vamos cadastrar a sua primeira carta do Super Trunfo: \n"); //Introdução / Cadastro 1 Carta

    printf("digite o codigo do estado (letra do A ao H): \n"); //Pegar o codigo do estado
    scanf("%s", codigoEstadoCarta1);

    printf("digite o codigo da carta (letra do codigo do estado + numero de 01 a 04): \n"); //Pegar codigo da carta
    scanf("%s", codigoCarta1);

    printf("digite o nome da cidade: \n"); //Pegar o nome da cidade
    scanf("%s", nomeCidadeCarta1);

    printf("digite a populacao desta cidade: \n"); //Pegar população da cidade
    scanf("%d", &populacaoCarta1);

    printf("digite a area desta cidade: \n"); //Pegar areas da cidade
    scanf("%f", &areaCidadeCarta1);

    printf("digite o PIB da cidade: \n"); //Pegar o PIB da cidade
    scanf("%f", &pibCarta1);

    printf("digite a quantidade de pontos turisticos que esta cidade possui: \n"); //Pegar quantidade de pontos turisticos que tem na cidade
    scanf("%d", &pontoTuristicoCarta1);

    densidadePopulacionalCarta1 = populacaoCarta1 / areaCidadeCarta1; //Calculo densidade populacional

    pibCapitaCarta1 = pibCarta1 / populacaoCarta1; //Calculo PIB per capita

    printf("\nSua Primeira carta fica:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n População:%d \n Area: %f\n PIB: %f\n Pontos Turisticos: %d\n Densidade populacional: %f\n PIB per Capita: %f", codigoEstadoCarta1, codigoCarta1, nomeCidadeCarta1, populacaoCarta1, areaCidadeCarta1, pibCarta1, pontoTuristicoCarta1, densidadePopulacionalCarta1, pibCapitaCarta1);

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("\nVamos cadastrar a sua segunda carta do Super Trunfo: \n"); //Cadastro 2 carta

    printf("digite o codigo do estado (letra do A ao H): \n"); //Pegar o codigo do estado
    scanf("%s", codigoEstadoCarta2);

    printf("digite o codigo da carta (letra do codigo do estado + numero de 01 a 04): \n"); //Pegar codigo da carta
    scanf("%s", codigoCarta2);

    printf("digite o nome da cidade: \n"); //Pegar o nome da cidade
    scanf("%s", nomeCidadeCarta2);

    printf("digite a populacao desta cidade: \n"); //Pegar população da cidade
    scanf("%d", &populacaoCarta2);

    printf("digite a area desta cidade: \n"); //Pegar areas da cidade
    scanf("%f", &areaCidadeCarta2);

    printf("digite o PIB da cidade: \n"); //Pegar o PIB da cidade
    scanf("%f", &pibCarta2);

    printf("digite a quantidade de pontos turisticos que esta cidade possui: \n"); //Pegar quantidade de pontos turisticos que tem na cidade
    scanf("%d", &pontoTuristicoCarta2);

    densidadePopulacionalCarta2 = populacaoCarta2 / areaCidadeCarta2; // Calculo densidade populacional

    pibCapitaCarta2 = pibCarta2 / populacaoCarta2; // Calculo PIB per capita

    printf("\nSua Primeira carta fica:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n População:%d \n Area: %f\n PIB: %f\n Pontos Turisticos: %d\n Densidade populacional: %f\n PIB per Capita: %f", codigoEstadoCarta2, codigoCarta2, nomeCidadeCarta2, populacaoCarta2, areaCidadeCarta2, pibCarta2, pontoTuristicoCarta2, densidadePopulacionalCarta2, pibCapitaCarta2);

    return 0;
}
