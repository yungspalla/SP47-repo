/*Scrivere un programma che consenta, dati in ingresso due numeri interi positivi (a,b) 
dei quali il secondo deve essere maggiore del primo, di stampare tutti i numeri compresi 
tra i due, cioè maggiori o uguali al primo e minori o uguali al secondo.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b, i;
  printf("Inserisci due numeri\n");
  do {
        scanf("%d", &a);
        scanf("%d", &b);
        } while (a >= b);
  printf("\nNumeri da %d a %d\n", a, b);
  while (a<=b) {
        printf("%d\n", a);
        a++;
        }
  system("PAUSE");	
  return 0;
}
