#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *filename = argv[1];
  FILE *fp;
  fp = fopen(filename, "r");
  int c;
  int i = 0;
  int cont_lin = 0;
  int cont_pal = 0;
  int in_word = 0;
  while((c = fgetc(fp)) != EOF) {
     i++;
     if(c == '\n') {
       cont_lin++;
     }
     if(c != '\n' && c != '\t' && c != ' ') {
       in_word = 1;
     }
     else {
       if (in_word != 0) cont_pal++;
       in_word = 0;
     }
  }
  fclose(fp);
    printf("L:%d P:%d C:%d\n", cont_lin, cont_pal, i);
  return 0;
}
