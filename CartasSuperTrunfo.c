#include <stdio.h>
#include <string.h> // Incluindo biblioteca pra uso do strcspn no nome da cidade

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Dados da Carta 1:
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int qtdPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    //Dados da Carta 2:
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int qtdPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    //Variáveis para comparação de atributos das cartas:
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoQtdPontosTuristicos, resultadoDensidadePopulacional, resultadoPirPerCapita, resultadoSuperPoder;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cadastro da Carta 1: \n");

    printf("Digite uma letra que representa o estado (A-H): \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", codigo1);
    getchar();  //Usado para remover o "\n" deixado no buffer quando executa o scanf anterior. Desta forma não pulamos a instrução seguinte.

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais, ex: 699.28): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &qtdPontosTuristicos1);

    printf("\n");
    getchar();

    //Cálculo da densidade populacional da Carta 1:

    densidadePopulacional1 = populacao1/area1;

    //Cálculo do PIB per capita da Carta 1:

    pibPerCapita1 = (pib1 * 1000000000.0)/(float) populacao1; //Multiplicação por 1000000000 para transformar em reais.

    //Calculo do super poder da Carta 1:
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)qtdPontosTuristicos1 + pibPerCapita1 + (1.0f/ densidadePopulacional1);
     
    //Início do cadastro da carta 2

    printf("Cadastro da Carta 2: \n");

    printf("Digite uma letra que representa o estado (A-H): \n");
    scanf("%c", &estado2);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", codigo2);
    getchar(); //Usado para remover o "\n" deixado no buffer quando executa o scanf anterior. Desta forma não pulamos a instrução seguinte.

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais, ex: 699.28): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &qtdPontosTuristicos2);

    //Cálculo da densidade populacional da Carta 2:

    densidadePopulacional2 = populacao2/area2;

    //Cálculo do PIB per capita da Carta 2:

    pibPerCapita2 = (pib2 * 1000000000.0)/ (float) populacao2;

    //Calculo do super poder da Carta 1:
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)qtdPontosTuristicos2 + pibPerCapita2 + (1.0f/ densidadePopulacional1);

    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", qtdPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n \n", pibPerCapita1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", qtdPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);
    
    //Comparações e exibição dos resultados

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoQtdPontosTuristicos = qtdPontosTuristicos1 > qtdPontosTuristicos2;
    resultadoDensidadePopulacional = qtdPontosTuristicos1 < qtdPontosTuristicos2;
    resultadoPirPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    printf("\n");
    printf("Comparação de cartas: \n");

    printf("População: Carta 1 venceu (%d) \n", resultadoPopulacao);
    printf("Área: Carta 1 venceu (%d) \n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d) \n", resultadoPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d) \n", resultadoQtdPontosTuristicos);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n", resultadoDensidadePopulacional);
    printf("PIB per Capita: Carta 1 venceu (%d) \n", resultadoPirPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)", resultadoSuperPoder);


    return 0;
}