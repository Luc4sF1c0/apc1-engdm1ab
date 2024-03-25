#include <stdio.h>
#include <math.h>

int main() {

  double a = -20.0;
  double b = 4.0;
  double c = 6.0;

  printf("Entre com o valor de a: ");
  double deu_certo = scanf("%lf", &a);

  printf("Entre com o calor de b: ");
  deu_certo = scanf("%lf", &b);

  printf("Entre com o valor de c: ");
  deu_certo = scanf("%lf", &c);

  double delta = b * b - 4 * a * c;
  double raiz1 = (-b + sqrt(delta));
  double raiz2 = (-b - sqrt(delta));

  printf("A raiz1 eh %lf\n", raiz1);
  printf("A raiz2 eh %lf\n" , raiz2);

  return 0;
  
  

  
}