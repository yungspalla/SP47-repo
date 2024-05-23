/*Scrivi un programma che chiede l'inserimento di NUM numeri ordinati in senso 
crescente(controllando l'inserimento) e ne calcoli la media.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, a, ntot;
	float media;
	printf("Quanti numeri vuoi inserire?\n");
	scanf("%d", &ntot);
	printf("\nInserisci %d numeri in ordine crescente, se li inserisci in ordine non crescente dovrai reinserire l'ultimo numero inserito in modo che rispetti l'ordine crescente\n", ntot);
	do {
		do {
			scanf("%d", &a);
		} while (a<n);
		n = a;
		media += n;
		i++;
	} while (i <= ntot);
	media /= ntot;
	printf("\nMedia dei numeri inseriti: %g\n", media);
	system("PAUSE");
	return 0;
}
