#include <stdio.h>

int main()
{
    char estado1[2], codigo1[4], nomeCidade1[20], estado2[2], codigo2[4], nomeCidade2[20];
    int numPontosTuristicos1, numPontosTuristicos2, opcaoAtributo1, opcaoAtributo2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2;

    // entrada de dados da primeira carta
    printf("-> Insira os dados da primeira carta \n");

    printf("Digite o estado da primeira carta: \n");
    scanf("%s", &estado1);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população da primeira carta: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km2) da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o pib (em bilhões de reais) da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &numPontosTuristicos1);

    // entrada de dados da segunda carta
    printf("-> Insira os dados da segunda carta \n");

    printf("Digite o estado da segunda carta: \n");
    scanf("%s", &estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população da segunda carta: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km2) da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o pib (em bilhões de reais) da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &numPontosTuristicos2);

    // Cálculo de variáveis

    float densidadePopulacional1 = (float)populacao1 / area1;
    float densidadePopulacional2 = (float)populacao2 / area2;

    float pibPerCapita1 = pib1 * (1e9) / (float)populacao1;
    float pibPerCapita2 = pib2 * (1e9) / (float)populacao2;

    float somaAtributos1 = 0;
    float somaAtributos2 = 0;

    // Impressão dos dados
    printf("\n Suas cartas são: \n \n");

    // Primeira carta
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km2 \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n \n", pibPerCapita1);

    // Segunda carta
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km2 \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n \n", pibPerCapita2);

    // Comparação de Cartas

    printf("\n Comparação de Cartas: \n");
    printf("Escolha 2 atributos para comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade populacional \n");
    printf("Escolha o primeiro: ");
    scanf("%d", &opcaoAtributo1);
    printf("Escolha o segundo: ");
    scanf("%d", &opcaoAtributo2);
    if (opcaoAtributo1 == opcaoAtributo2)
    {
        printf("Atributo já escolhido! Escolha um atributo diferente! \n");
        printf("Escolha o segundo: ");
        scanf("%d", &opcaoAtributo2);
    }

    // Comparação primeiro atributo
    switch (opcaoAtributo1)
    {

    case 1:
        printf("Atributo: População \n");
        printf("Carta 1 - %s : %lu \n", nomeCidade1, populacao1);
        printf("Carta 2 - %s : %lu \n", nomeCidade2, populacao2);
        printf(" Resultado: ");

        if (populacao1 > populacao2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (populacao1 < populacao2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 = (float)populacao1;
        somaAtributos2 = (float)populacao2;

        break;

    case 2:
        printf("Atributo: Área \n");
        printf("Carta 1 - %s : %.2f km2 \n", nomeCidade1, area1);
        printf("Carta 2 - %s : %.2f km2 \n", nomeCidade2, area2);
        printf(" Resultado: ");

        if (area1 > area2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (area1 < area2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 = area1;
        somaAtributos2 = area2;

        break;

    case 3:
        printf("Atributo: PIB \n");
        printf("Carta 1 - %s : %.2f bilhões de reais \n", nomeCidade1, pib1);
        printf("Carta 2 - %s : %.2f bilhões de reais \n", nomeCidade2, pib2);
        printf(" Resultado: ");

        if (pib1 > pib2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (pib1 < pib2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 = pib1;
        somaAtributos2 = pib2;

        break;

    case 4:
        printf("Atributo: Número de pontos Turísticos \n");
        printf("Carta 1 - %s : %d \n", nomeCidade1, numPontosTuristicos1);
        printf("Carta 2 - %s : %d \n", nomeCidade2, numPontosTuristicos2);
        printf(" Resultado: ");

        if (numPontosTuristicos1 > numPontosTuristicos2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (numPontosTuristicos1 < numPontosTuristicos2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 = (float)numPontosTuristicos1;
        somaAtributos2 = (float)numPontosTuristicos2;

        break;

    case 5:
        printf("Atributo: Densidade populacional \n");
        printf("Carta 1 - %s : %.2f hab/km2 \n", nomeCidade1, densidadePopulacional1);
        printf("Carta 2 - %s : %.2f hab/km2 \n", nomeCidade2, densidadePopulacional2);
        printf(" Resultado: ");

        if (densidadePopulacional1 < densidadePopulacional2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 = densidadePopulacional1;
        somaAtributos2 = densidadePopulacional2;

        break;

    default:
        printf("Opção inválida \n");
        break;
    }

    // Comparação segundo atributo
    switch (opcaoAtributo2)
    {

    case 1:
        printf("Atributo: População \n");
        printf("Carta 1 - %s : %lu \n", nomeCidade1, populacao1);
        printf("Carta 2 - %s : %lu \n", nomeCidade2, populacao2);
        printf(" Resultado: ");

        if (populacao1 > populacao2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (populacao1 < populacao2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 += (float)populacao1;
        somaAtributos2 += (float)populacao2;

        break;

    case 2:
        printf("Atributo: Área \n");
        printf("Carta 1 - %s : %.2f km2 \n", nomeCidade1, area1);
        printf("Carta 2 - %s : %.2f km2 \n", nomeCidade2, area2);
        printf(" Resultado: ");

        if (area1 > area2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (area1 < area2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 += area1;
        somaAtributos2 += area2;

        break;

    case 3:
        printf("Atributo: PIB \n");
        printf("Carta 1 - %s : %.2f bilhões de reais \n", nomeCidade1, pib1);
        printf("Carta 2 - %s : %.2f bilhões de reais \n", nomeCidade2, pib2);
        printf(" Resultado: ");

        if (pib1 > pib2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (pib1 < pib2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 += pib1;
        somaAtributos2 += pib2;

        break;

    case 4:
        printf("Atributo: Número de pontos Turísticos \n");
        printf("Carta 1 - %s : %d \n", nomeCidade1, numPontosTuristicos1);
        printf("Carta 2 - %s : %d \n", nomeCidade2, numPontosTuristicos2);
        printf(" Resultado: ");

        if (numPontosTuristicos1 > numPontosTuristicos2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (numPontosTuristicos1 < numPontosTuristicos2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 += (float)numPontosTuristicos1;
        somaAtributos2 += (float)numPontosTuristicos2;

        break;

    case 5:
        printf("Atributo: Densidade populacional \n");
        printf("Carta 1 - %s : %.2f hab/km2 \n", nomeCidade1, densidadePopulacional1);
        printf("Carta 2 - %s : %.2f hab/km2 \n", nomeCidade2, densidadePopulacional2);
        printf(" Resultado: ");

        if (densidadePopulacional1 < densidadePopulacional2)
        {
            printf("Carta 1 venceu! \n");
        }
        else if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("Carta 2 venceu! \n");
        }
        else
        {
            printf("Empate! \n");
        }

        somaAtributos1 += densidadePopulacional1;
        somaAtributos2 += densidadePopulacional2;

        break;

    default:
        printf("Opção inválida \n");
        break;
    }

    // Comparação soma atributos
    printf("Soma dos atributos \n");
    printf("Carta 1 - %s : %.2f \n", nomeCidade1, somaAtributos1);
    printf("Carta 2 - %s : %.2f \n", nomeCidade2, somaAtributos2);
    printf(" Resultado: ");

    if (somaAtributos1 > somaAtributos2)
    {
        printf("Carta 1 venceu! \n");
    }
    else if (somaAtributos1 < somaAtributos2)
    {
        printf("Carta 2 venceu! \n");
    }
    else
    {
        printf("Empate! \n");
    }

    return 0;
}