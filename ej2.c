#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n, m;
  int suma = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%d", &m);
    if(m == 0) {
      break;
    }
    suma += m;
  }
  printf("%d\n", suma);
  return 0;
}
