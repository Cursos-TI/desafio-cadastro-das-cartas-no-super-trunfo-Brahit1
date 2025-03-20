#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

//Area de definição de Variaveis:
	
//Area de Cadastro da carta1:	
	
char nome_do_pais_carta1[30];

int populacao_carta1;

float area_carta1;	
	
float pib_carta1;	
	
int numero_de_pontos_carta1;	
	
float densidade_demografica_carta1;	
	
//Area de cadastro da carta2:
	
char nome_do_pais_carta2[30];

int populacao_carta2;

float area_carta2;	
	
float pib_carta2;	
	
int numero_de_pontos_carta2;	
	
float densidade_demografica_carta2;		
	
int opcao, opcao2;		
	
printf(" ***Logica do Jogo Super Trunfo *** \n \n");

//Usuario cadastrando a carta1:

printf("Cadastrando a carta1: \n\n");	
	
printf("Digie o nome do seu pais: \n");	
	
scanf("%s", &nome_do_pais_carta1);	
	
printf("Digite a populacao do seu pais: \n");

scanf("%d", &populacao_carta1);	
	
printf("Digite a area do seu pais: \n");

scanf("%f", &area_carta1);	
	
printf("Digite o pib do seu pais: \n");	
	
scanf("%f", &pib_carta1);	
	
printf("Digite o numero de pontos turisticos do seu pais: \n");

scanf("%d", &numero_de_pontos_carta1);

printf("Digite a densidade demografica do seu pais: \n");

scanf("%f", &densidade_demografica_carta1);

//Area VIsivel ao usuario da carta 1:

printf("O seu pais e: %s\n\n", nome_do_pais_carta1);

printf("A populacao do seu pais e: %d\n\n", populacao_carta1);

printf("A area do seu pais e: %f\n\n", area_carta1);

printf("O pib do seu pais e: %f\n\n", pib_carta1);

printf("O numero de pontos turisticos e: %d\n\n", numero_de_pontos_carta1);	
	
printf("A densidade demografica do seu pais e: %f\n\n", densidade_demografica_carta1);

//area de cadastro da carta2:

printf("Cadastrando a carta2: \n\n");

printf("Digie o nome do seu pais: \n");	
	
scanf("%s", &nome_do_pais_carta2);	
	
printf("Digite a populacao do seu pais: \n");

scanf("%d", &populacao_carta2);	
	
printf("Digite a area do seu pais: \n");

scanf("%f", &area_carta2);	
	
printf("Digite o pib do seu pais: \n");	
	
scanf("%f", &pib_carta2);	
	
printf("Digite o numero de pontos turisticos do seu pais: \n");

scanf("%d", &numero_de_pontos_carta2);

printf("Digite a densidade demografica do seu pais: \n");

scanf("%f", &densidade_demografica_carta2);

printf("O seu pais e: %s\n\n", nome_do_pais_carta2);

//area visivel ao usuario da carta2:

printf("A populacao do seu pais e: %d\n\n", populacao_carta2);

printf("A area do seu pais e: %f\n\n", area_carta2);

printf("O pib do seu pais e: %f\n\n", pib_carta2);

printf("O numero de pontos turisticos e: %d\n\n", numero_de_pontos_carta2);	
	
printf("A densidade demografica do seu pais e: %f\n\n", densidade_demografica_carta2);

//menu De escolha de comparação de atributos:

printf("Menu inicial: \n\n");

printf("Escolha uma das opcoes abaixo para a comparacao: \n\n");

printf("1. nome do pais \n");

printf("2. populacao do pais \n");

printf("3. area do pais em km \n");

printf("4. pib do pais \n");

printf("5. numero de pontos turisticos do pais \n");

printf("6. densidade de mografica (ganha o pais que tiver a menor)\n");

printf("7. ver as regras \n");

scanf("%d", &opcao);

//area switch com as esolhas:

switch (opcao){
	
case 1:

printf("Nome do pais nao e um atributo que pode ser comparado \n\n");	
	
break;

case 2:
	
if (populacao_carta1 > populacao_carta2){

printf("A Carta 1 Venceu \n");
	
}else if(populacao_carta2 > populacao_carta1){
	
printf("A Carta 2 Venceu \n");	
	
}else{
	printf("A populacao e igual \n");
}

break;
	
case 3:
	
if(area_carta1 > area_carta2){
	
printf("A carta 1 Venceu \n");	
	
}else if(area_carta2 > area_carta1){
		
printf("A carta 2 Venceu \n");	
	
}else{
	
printf("A area das cartas e igual \n");	
	
}
	
break;	
	
case 4:
	
if(pib_carta1 > pib_carta2){
	
printf("A carta 1 Venceu \n");	
	
}else if(pib_carta2 > pib_carta1){

printf("A carta 2 Venceu \n");
	
}else{
	
printf("O pib das cartas e igual \n");	
	
}	
	
break;	

case 5:
	
if(numero_de_pontos_carta1 > numero_de_pontos_carta2){
	
printf("A carta 1 Venceu \n");
	
}else if(numero_de_pontos_carta2 > numero_de_pontos_carta1){

printf("A carta 2 Venceu \n");

}else{
	
printf("O numero de pontos turisticos e igual \n");
	
}

break;

case 6:
	
if(densidade_demografica_carta1 < densidade_demografica_carta2){
	
printf("A carta 1 Venceu \n");
	
}else if(densidade_demografica_carta2 < densidade_demografica_carta1){

printf("A carta 2 Venceu \n");
	
}else{
	
printf("A densidade demografica das cartas e igual \n");	
	
}

break;

case 7:
	
printf("As Regras Sao: \n\n");

printf("Registre as duas carta e compare os atributos delas \n\n");

printf("As cartas que tiverem os maiores valores nos atributos comparados, vencem \n\n");

printf("Exceto Densidade demografica, em que a carta com a menor densidade demografica ganha \n\n");

printf("Caso o Jogador Ganhe as 2 Comparacoes ele ganha o Jogo \n\n");

printf("Se as 2 Comparacoes forem Iguais o Jogo Terminara empatado \n\n");

printf("E Caso o Jogador Ganhe uma comparcao e Perca Outra, Sera Dito Como Empate Tambem \n\n");

break;

default:
	
printf("Opcao invalida \n");

break;

}

printf("Segundo Atributo: \n\n");

printf("Escolha uma Opcao Diferente do Primeiro Atributo: \n\n");

printf("1. nome do pais \n");

printf("2. populacao do pais \n");

printf("3. area do pais em km \n");

printf("4. pib do pais \n");

printf("5. numero de pontos turisticos do pais \n");

printf("6. densidade de mografica (ganha o pais que tiver a menor)\n");

printf("7. ver as regras \n");

scanf("%d", &opcao2);

//area switch com as esolhas:

if(opcao == opcao2){
	
printf("Voce Ja Comparou este Atributo Anteriormente \n\n");	
	
}else{
	
switch (opcao){
	
case 1:

printf("Nome do pais nao e um atributo que pode ser comparado \n");	
	
break;

case 2:
	
if (populacao_carta1 > populacao_carta2){

printf("A Carta 1 Venceu \n");
	
}else if(populacao_carta2 > populacao_carta1){
	
printf("A Carta 2 Venceu \n");	
	
}else{
	printf("A populacao e igual \n");
}

break;
	
case 3:
	
if(area_carta1 > area_carta2){
	
printf("A carta 1 Venceu \n");	
	
}else if(area_carta2 > area_carta1){
		
printf("A carta 2 Venceu \n");	
	
}else{
	
printf("A area das cartas e igual \n");	
	
}
	
break;	
	
case 4:
	
if(pib_carta1 > pib_carta2){
	
printf("A carta 1 Venceu \n");	
	
}else if(pib_carta2 > pib_carta1){

printf("A carta 2 Venceu \n");
	
}else{
	
printf("O pib das cartas e igual \n");	
	
}	
	
break;	

case 5:
	
if(numero_de_pontos_carta1 > numero_de_pontos_carta2){
	
printf("A carta 1 Venceu \n");
	
}else if(numero_de_pontos_carta2 > numero_de_pontos_carta1){

printf("A carta 2 Venceu \n");

}else{
	
printf("O numero de pontos turisticos e igual \n");
	
}

break;

case 6:
	
if(densidade_demografica_carta1 < densidade_demografica_carta2){
	
printf("A carta 1 Venceu \n");
	
}else if(densidade_demografica_carta2 < densidade_demografica_carta1){

printf("A carta 2 Venceu \n");
	
}else{
	
printf("A densidade demografica das cartas e igual \n");	
	
}

break;

case 7:
	
printf("As Regras Sao: \n\n");

printf("Registre as duas carta e compare os atributos delas \n\n");

printf("As cartas que tiverem os maiores valores nos atributos comparados, vencem \n\n");

printf("Exceto Densidade demografica, em que a carta com a menor densidade demografica ganha \n\n");

break;

default:
	
printf("Opcao invalida \n");

break;

}

return 0;

}


}
