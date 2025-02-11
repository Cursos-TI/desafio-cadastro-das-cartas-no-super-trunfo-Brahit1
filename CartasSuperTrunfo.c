#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_da_cidade [30] ;

    char nome [30];

    int populacao;

    float area;

    float pib;

    int numero_de_pontos_turisticos;

    printf("*** Programa de Cadastro de Cartas Super Trunfo *** \n \n");

    // Cadastro das Cartas:
    printf("Digite o codigo de cidade da sua carta: \n");
    scanf("%s", &codigo_da_cidade);

    printf("Digite o nome do seu estado: \n ");
    scanf("%s", &nome);

    printf("Digite a populacao da sua carta: \n");
    scanf("%d", &populacao);

    printf("Digite sua area em km: \n");
    scanf("%f", &area);

    printf("Digite o PIB da sua carta: \n");
    scanf("%f", &pib);

    printf("Digite o seu numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    printf("O codigo da sua cidade e: %s\n", codigo_da_cidade);
    printf("O nome do seu estado e: %s\n", nome);
    printf("Sua populacao e: %d\n", populacao);
    printf("Sua area em km e: %f\n", area);
    printf("Seu PIB e: %f\n", pib);
    printf("Seu numero de pontos turisticos e: %d\n", numero_de_pontos_turisticos);


    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
