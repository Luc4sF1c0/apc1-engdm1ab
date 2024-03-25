#include <stdio.h>

int main() {

  float segundos = 123450000.0f;
  float minutos = segundos / 60.f;
  float horas = minutos / 60.f;

  printf("Entre com o valor dos segundos");
    int deu_certo = scanf("%f", &segundos);

  printf("Entre com o valor dos minutos");
  deu_certo = scanf("%f", &minutos);

  printf("Entre com o valor das horas");
  deu_certo = scanf("%f", &horas);

  printf("O valor de horas eh %f\n", horas);
  printf("O valor dos minutos eh %f\n", minutos);
  printf("O valor dos segundos eh %f\n", segundos);

  return 0;

  
}