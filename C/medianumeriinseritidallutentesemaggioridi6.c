/*Scrivi un programma in C che permetta di inserire n numeri (anche n inserito dall’utente) 
che trova e visualizza quali sono multipli di 6. Trova anche la media dei multipli.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=0, n, nmult6=0, ntot;
	float media=0;
	printf("Quanti numeri vuoi inserire?\n");
	scanf("%d", &ntot);
	printf("\nInserisci %d numeri\n", ntot);
	do {
		scanf("%d", &n);
		if (n%6==0) {
			nmult6++;
			media += n;
		}
		i++;
	} while (i<ntot);
	media = media / nmult6;
	printf("\nMedia dei numeri multipli di 6: %g\n", media);
	system("PAUSE");
	return 0;
}
