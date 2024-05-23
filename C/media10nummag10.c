//Scrivi un programma che legge 10 numeri reali e calcola la media fra quelli che sono maggiori di 10
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i=0, n, mag=0;
  float media;
  printf("Inserisci 10 numeri\n");
  while (i<10) {
        scanf("%d", &n);
        if (n>10) {
            media += n;
            mag++;
            }
        i++;
        }
  media = media / mag;
  printf("\nMedia: %g\n", media);
  system("PAUSE");	
  return 0;
}
