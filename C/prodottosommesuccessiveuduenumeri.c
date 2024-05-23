/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il metodo delle somme successive, 
dopo aver controllato l'input e aver accettato solo valori maggiori di 0.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x, y, i, tot=0;
  printf("Quali numeri vuoi moltiplicare tra di loro\n");
  do {
  scanf("%d", &x);
  scanf("%d", &y);
  } while (x<=0 || y<=0);
  for (i=0; i<y; i++) {
        tot += x;
        }
  printf("\nProdotto: %d\n", tot);
  system("PAUSE");	
  return 0;
}
