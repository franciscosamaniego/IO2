#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a, b, n;
  printf("Ingrese un numero a\n");
  scanf("%d", &a);
  printf("Ingrese un numero b\n");
  scanf("%d", &b);
  printf("Ingrese la cantidad de veces que quiera hacerlo\n");
  scanf("%d\n", &n);
  for(int i = 0; i < n; i++) {
    int r = (rand() % (b - a)) + a;
    printf("%d ", r);
  }
  printf("\n");
  return 0;
}
