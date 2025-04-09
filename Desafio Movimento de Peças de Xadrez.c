#include <stdio.h>

//Area de Criacao de Variaveis

void moverBispo(int casas){

if(casas > 0){
    
printf("Cima, Direita \n");

moverBispo(casas - 1);
    
}    
    
}

void moverTorre(int casas){
    
if(casas > 0){
    
printf("Direita \n");

moverTorre(casas - 1);
    
}    

}

void moverRainha(int casas){
    
if(casas > 0){

printf("Esquerda \n");

moverRainha(casas - 1);
    
}    
    
}

void moverCavalo(int casas){
    
if(casas > 0){

printf("Cima \n");

moverCavalo(casas - 1);
    
}    

}

void moverCavalocima(int casas){
    
if(casas > 0){

printf("Direita \n");

moverCavalocima(casas -1);
    
}

}

int opcao;

//Area de Chamar Variaveis

int main(){
    
printf("*** Programa de Movimeto de Pecas de Xadrez em C *** \n\n");

do{

printf("Menu: \n\n");

printf("Escolha Uma Das Pecas Abaixo para Movimentacao: \n");

printf("1. Bispo \n");

printf("2. Torre \n");

printf("3. Rainha \n");

printf("4. Cavalo \n");

printf("5. Sair \n");

scanf("%d", &opcao);

//Menu de Opcoes para o Usuario

switch(opcao){
    
case 1:

moverBispo(5);

break;

case 2:

moverTorre(5);

break;

case 3:

moverRainha(8);

break;

case 4:

moverCavalo(2);

moverCavalocima(1);

break;

case 5: 

printf("Saindo... \n");

break;

default:

printf("Opcao Invalida \n");

break;

}
    
}while(opcao != 5);
    
return 0;    
    
}
