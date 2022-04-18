#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 4096

int read_file(char *text, char *filename);

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Uso: ./readability file\n");
        return 1;
    }

    char text[MAX];

    if (read_file(text, argv[1])) {
        printf("Archivo no encontrado\n");
        return 1;
    }
    // TODO
    int i = 0;
    int p = 0;
    int l = 0;
    int o = 0;
    int t = 0;
    int L = 0;
    int S = 0;
    while (text[i]>0) {

        if (text[i]=='!'||text[i]=='?'||text[i]=='.') {
            o++;
        }

        if (text[i] == ' ') {
            p++;    
        }
          if (text[i]!='\0'){
            l++;
        }
          i++;
          int t = round (0,0588*L-0,29*S-15,8);{
              if (int t < 1){
              printf ("Before Grade 1");
          }
              else if (int t > 16){
              printf ("Grade 16+");
              }
              else if (int t >=2; int t <=15){
              printf ("Grade ",int t);
              }
          }
        }
    return 0;
}

int read_file(char *text, char *filename) {

    FILE *fp;
    char c;
    char full_name[30];
    
    sprintf(full_name, "texts/%s.txt", filename);
    fp = fopen(full_name, "r");
    
    if (!fp) {
        return 1;
    } 
    while ((c = getc(fp)) != EOF) {
        *text = c;
        text++;
    }
    return 0;
}