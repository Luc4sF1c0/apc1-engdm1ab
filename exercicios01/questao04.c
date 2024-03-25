#include <stdio.h>

int main() {
  float ICMS = 0.17f;
  float COFINS = 0.076f;
  float PSI_PASEP = 0.0165f;
  float preco_inicial = 200000.0f;

  printf("Entre com o valor de ICMS: ");
  int deu_certo = scanf("%f" , &ICMS);

  printf("Entre com o valor de COFINS;");
  deu_certo = scanf("%f" , &COFINS);

  printf("Entre com o valor de PSI_PASEP");
  deu_certo = scanf("%f" , & PSI_PASEP);

  printf("Entre com o valor do preco_inicial");
  deu_certo = scanf("%f" , &preco_inicial);

  float preco_final = (1 + ICMS + COFINS + PSI_PASEP) * preco_inicial;
  printf("O preco_final eh %f\n" , preco_final);

  return 0;
}