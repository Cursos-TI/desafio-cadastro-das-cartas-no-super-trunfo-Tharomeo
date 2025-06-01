#include <stdio.h>

int main() {
    // Dados carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    char nomePais1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // Dados carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    char nomePais2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    int opcao1, opcao2;

    // Entrada dados carta 1
    printf("Informe os dados da Carta 1:\n");

    printf("Nome do País: ");
    scanf("%99[^\n]", nomePais1);

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%99s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dados carta 2
    printf("\nInforme os dados da Carta 2:\n");

    printf("Nome do País: ");
    scanf("%99[^\n]", nomePais2);

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%99s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula densidade demográfica
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // Menu para escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Valida primeira opção
    if (opcao1 < 1 || opcao1 > 5) {
        printf("Opcao invalida.\n");
        return 1;
    }

    // Menu para escolha do segundo atributo (sem repetir o primeiro)
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Número de Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Valida segunda opção e impede repetição
    if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
        printf("Opcao invalida ou igual a primeira.\n");
        return 1;
    };

    // Função auxiliar para mostrar nome do atributo
    char *nomeAtributo (int op){
        switch(op) {
            case 1: return "Populacao";
            case 2: return "Area";
            case 3: return "PIB";
            case 4: return "Numero de Pontos Turisticos";
            case 5: return "Densidade Demografica";
            default: return "";
        }
    }

    // Função auxiliar para obter o valor do atributo de cada carta
    float valorAtributoCarta1(int op) {
        switch(op) {
            case 1: return (float)populacao1;
            case 2: return area1;
            case 3: return pib1;
            case 4: return (float)pontosTuristicos1;
            case 5: return densidade1;
            default: return 0.0;
        }
    }
    float valorAtributoCarta2(int op) {
        switch(op) {
            case 1: return (float)populacao2;
            case 2: return area2;
            case 3: return pib2;
            case 4: return (float)pontosTuristicos2;
            case 5: return densidade2;
            default: return 0.0;
        }
    }

    // Regra de comparação: para densidade vence menor, para outros vence maior
    // Retorna 1 se carta1 vence, 2 se carta2 vence, 0 empate
    int comparaAtributo(int op) {
        float val1 = valorAtributoCarta1(op);
        float val2 = valorAtributoCarta2(op);
        if (op == 5) { // densidade
            if (val1 < val2) return 1;
            else if (val2 < val1) return 2;
            else return 0;
        } else {
            if (val1 > val2) return 1;
            else if (val2 > val1) return 2;
            else return 0;
        }
    };

    // Mostra valores dos atributos selecionados
    float val1_atrib1 = valorAtributoCarta1(opcao1);
    float val2_atrib1 = valorAtributoCarta2(opcao1);
    float val1_atrib2 = valorAtributoCarta1(opcao2);
    float val2_atrib2 = valorAtributoCarta2(opcao2);

    // Soma dos atributos para cada carta
    // Para densidade, inverte o valor para somar (quanto menor, maior o valor)
    float somaCarta1 = 0.0, somaCarta2 = 0.0;

    somaCarta1 += (opcao1 == 5) ? (1.0f / val1_atrib1) : val1_atrib1;
    somaCarta2 += (opcao1 == 5) ? (1.0f / val2_atrib1) : val2_atrib1;

    somaCarta1 += (opcao2 == 5) ? (1.0f / val1_atrib2) : val1_atrib2;
    somaCarta2 += (opcao2 == 5) ? (1.0f / val2_atrib2) : val2_atrib2;

    // Imprime resultado organizado
    printf("\nComparacao de cartas (%s e %s):\n\n", nomePais1, nomePais2);

    printf("Atributo 1 - %s:\n", nomeAtributo(opcao1));
    printf("  Carta 1 (%s): ", nomePais1);
    if (opcao1 == 1 || opcao1 == 4)
        printf("%.0f\n", val1_atrib1);
    else if (opcao1 == 2)
        printf("%.2f km²\n", val1_atrib1);
    else if (opcao1 == 3)
        printf("%.2f bilhões de reais\n", val1_atrib1);
    else if (opcao1 == 5)
        printf("%.2f hab/km²\n", val1_atrib1);

    printf("  Carta 2 (%s): ", nomePais2);
    if (opcao1 == 1 || opcao1 == 4)
        printf("%.0f\n", val2_atrib1);
    else if (opcao1 == 2)
        printf("%.2f km²\n", val2_atrib1);
    else if (opcao1 == 3)
        printf("%.2f bilhões de reais\n", val2_atrib1);
    else if (opcao1 == 5)
        printf("%.2f hab/km²\n", val2_atrib1);

    printf("\nAtributo 2 - %s:\n", nomeAtributo(opcao2));
    printf("  Carta 1 (%s): ", nomePais1);
    if (opcao2 == 1 || opcao2 == 4)
        printf("%.0f\n", val1_atrib2);
    else if (opcao2 == 2)
        printf("%.2f km²\n", val1_atrib2);
    else if (opcao2 == 3)
        printf("%.2f bilhões de reais\n", val1_atrib2);
    else if (opcao2 == 5)
        printf("%.2f hab/km²\n", val1_atrib2);

    printf("  Carta 2 (%s): ", nomePais2);
    if (opcao2 == 1 || opcao2 == 4)
        printf("%.0f\n", val2_atrib2);
    else if (opcao2 == 2)
        printf("%.2f km²\n", val2_atrib2);
    else if (opcao2 == 3)
        printf("%.2f bilhões de reais\n", val2_atrib2);
    else if (opcao2 == 5)
        printf("%.2f hab/km²\n", val2_atrib2);

    printf("\nSoma dos atributos:\n");
    printf("  Carta 1 (%s): %.4f\n", nomePais1, somaCarta1);
    printf("  Carta 2 (%s): %.4f\n", nomePais2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomePais1);
    } else if (somaCarta2 > somaCarta1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomePais2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
