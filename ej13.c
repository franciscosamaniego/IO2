#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *p;
  int i = 0;
  while(scanf("%s\n", &p) != EOF) {
     i++;
   }
    printf("P:%d\n", i);
  return 0;
}
