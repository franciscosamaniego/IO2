#include <stdio.h>

int main(void) {
  int n;
  int suma = 0;
  //sumar hasta EOF (End Of File)
  while(scanf("%d", &n) != EOF) {
    suma += n;
  }
  printf("%d\n", suma);
  return 0;
}
