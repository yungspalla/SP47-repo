/*Scrivi un programma che legge un numero NUM di numeri reali e calcola 
la media fra quelli che sono maggiori di 10*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=0, n, nmag10=0, ntot;
	float media=0;
	printf("Quanti numeri vuoi inserire?\n");
	scanf("%d", &ntot);
	printf("\nInserisci %d numeri\n", ntot);
	do {
		scanf("%d", &n);
		if (n>10) {
			nmag10++;
			media += n;
		}
		i++;
	} while (i<ntot);
	media = media / nmag10;
	printf("\nMedia dei numeri maggiori di 10: %g\n", media);
	system("PAUSE");
	return 0;
}
