#include <stdio.h>

int main() {
  float base = 18.0f;
  float altura = 20.0f;

  printf("Entre com o valor da base: ");
  int deu_certo = scanf("%f" , &base);

  printf("Entre com o valor da altura: ");
  deu_certo = scanf("%f", &altura);

    float area = base * altura / 2;

  printf("A area do triangulo eh %f\n" , area);

  return 0;
}