#include <stdio.h>

int main(void) {
  int numero[10];
  int i = 0;

  // entrar com numeros
  for (i = 0; i < 10; i++) {
    scanf("%d", &numero[i]);

    // verificar se o número é 0 e interromper a entrada
    if (numero[i] == 0) {
      break;
    }

    if (numero[i] % 2 == 0) {
      printf("P\n");
    } else {
      printf("I\n");
    }
  }

  return 0;
}
