#include <stdio.h>

int main() {
  float PI = 3.1416;
  float raio = 4.0f;

  printf("Entre com o valor de PI");
  int deu_certo = scanf("%f", &PI);

  printf("Entre com o valor do raio");
  deu_certo = scanf("%f" , &raio);

  float area = PI * raio;

  printf("A area da pizza eh %f\n", area);

  return 0;
  
}