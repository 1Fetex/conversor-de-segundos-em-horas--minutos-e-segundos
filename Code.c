#include <stdio.h>

int main(void) {
  int segundos, h, m, s, resto;
  // conversor de segundos em horas, minutos e segundos

  printf("\t digite o segundo: ");
  scanf("%d", &segundos);

  h = segundos / 3600;
  resto = segundos % 3600;
  m = resto / 60;
  s = resto % 60;
  printf("%d:%d:%d\n", h, m, s);

  return 0;
}