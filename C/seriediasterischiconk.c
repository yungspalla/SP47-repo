#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i, k, a;
  printf("Inserisci un numero minore di 20\n");
  do {
        scanf("%d", &k);
        } while (k>20);
  for (i=0; i<k; i++) {
        for (a=0; a<k; a++) {
            printf("*");
            }
        printf("\n");
        }
  system("PAUSE");	
  return 0;
}
