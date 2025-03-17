#include <stdio.h>

int main(){
    //Começar cadastrando as variaveis para a carta 1 e 2
    int populacaoCarta1, pontoTuristicoCarta1, populacaoCarta2, pontoTuristicoCarta2;
    float areaCidadeCarta1, pibCarta1, areaCidadeCarta2, pibCarta2;
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

    printf("\nSua Primeira carta fica:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n População:%d \n Area: %f\n PIB: %f\n Pontos Turisticos: %d", codigoEstadoCarta1, codigoCarta1, nomeCidadeCarta1, populacaoCarta1, areaCidadeCarta1, pibCarta1, pontoTuristicoCarta1);
    //Print das informações da carta 1

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

    printf("\nSua Segunda carta fica:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n Populacao:%d \n Area: %f\n PIB: %f\n Pontos Turisticos: %d", codigoEstadoCarta2, codigoCarta2, nomeCidadeCarta2, populacaoCarta2, areaCidadeCarta2, pibCarta2, pontoTuristicoCarta2);
    //Print das informações da carta 2
    return 0;
}
