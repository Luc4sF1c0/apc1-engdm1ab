#include <stdio.h>

int main() {
  float Gigabyte = 5.0f;
  float Byte = Gigabyte * 1024 * 1024 * 1024;

  printf("Entre com o valor de Gigabyte");
  int deu_certo = scanf("%f" , &Gigabyte);

  printf("Entre com o valor de byte");
  deu_certo = scanf("%f" , &Byte);

  float megabyte = Gigabyte * 1024 * 1024 * 1024;

  printf("O valor de byte eh %f\n", Byte);

  return 0;
}