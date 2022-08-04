#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = rand() % 1000 + 1;
  int intento;
  for(int i = 0; i < 5; i++) {
    printf("Ingrese un numero\n");
    scanf("%d", &intento);
    if(intento > n)     printf("Elija un numero menor\n");
    if(intento < n && i == 4 || intento >n && i == 4) printf("Perdiste\n");
    else if(intento < n)     printf("Elija un numero mayor\n");
    else       printf("Ganaste\n");
  }
  return 0;
}
