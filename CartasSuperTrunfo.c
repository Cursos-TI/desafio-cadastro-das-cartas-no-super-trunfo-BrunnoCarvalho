#include <stdio.h>

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
    int populacao1;
    float area1;
    float pib1;
    int qtdPontosTuristicos1;

    //Dados da Carta 2:
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int qtdPontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cadastro da Carta 1: \n");

    printf("Digite uma letra que representa o estado (A-H): \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", &codigo1);
    getchar();  //Usado para remover o "\n" deixado no buffer quando executa o scanf anterior. Desta forma não pulamos a instrução seguinte.

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &qtdPontosTuristicos1);

    printf("\n");
    getchar();

    //Inicio do cadastro da carta 2

    printf("Cadastro da Carta 2: \n");

    printf("Digite uma letra que representa o estado (A-H): \n");
    scanf("%c", &estado2);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", &codigo2);
    getchar(); //Usado para remover o "\n" deixado no buffer quando executa o scanf anterior. Desta forma não pulamos a instrução seguinte.

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &qtdPontosTuristicos2);

    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n \n", qtdPontosTuristicos1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d", qtdPontosTuristicos2);

    return 0;
}
