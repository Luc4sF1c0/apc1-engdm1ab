#include <stdio.h>

int main() {
char nome[31] = "";
int quantidade = 0;
float valor = 0.0f;

printf("Entre com o nome do produto: ");
int deu_certo = scanf("%[^\n]s",nome);

printf("Entre com o quantidade do produto: "); 
deu_certo = scanf("%i" , &quantidade);

  printf("Encontre o valor do priduto: ");
  deu_certo = scanf("%f" , &valor);

  printf("------------------------\n");
  printf("       NOTA LEGAL       \n");
  printf("-------------------------\n");
  printf("ITEM       QTD PRECO    \n");

  printf("%-14s %03i %11.2f\n" , nome, quantidade, valor);
  
return 0;
  
} 