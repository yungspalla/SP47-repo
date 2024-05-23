//acquisita l’altezza di n invidui calcolare l’altezza media, numero pers piu alte di 1,80 e numero pers meno alte di 1,80
#include <stdio.h>
int main (void) {
  int n, i, alti=0, bassi=0;
  float media=0;
  printf("Quante persone stai registrando?\n");
  scanf("%d", &n);
  int altezze[n];
  printf("Inserisci l'altezza di %d persone in centimetri\n", n);
  for (i=0; i<n; i++) {
    scanf("%d", &altezze[i]);
    media += altezze[i];
    if (altezze[i]>=180) {
      alti++;
    } else {
      bassi++;
    }
  }
  media = media/n;
  printf("Altezza media: %g\nPersone più alte di 180 cm (oppure alte 180cm): %d\nPersone meno alte di 180 cm: %d\n", media, alti, bassi);
}
