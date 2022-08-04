#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *filename = argv[1];
  FILE *fp;
  fp = fopen(filename, "r");
  int c;
  int cont_lin = 0;
  while((c = fgetc(fp)) != EOF) {
     if(c == '\n') {
       cont_lin++;
     }
   }
  fclose(fp);
    printf("L:%d\n", cont_lin);
  return 0;
}
