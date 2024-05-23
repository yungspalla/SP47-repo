/*Scrivi un programma che visualizzi la tabellina pitagorica 10*10, 
cioè composta da 10 righe e 10 colonne*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x=1, y=1;
	do {
		do {
			printf("%d ", x*y);
			x++;
		} while (x<11);
		printf("\n");
		y++;
		x = 1;
	} while (y<11);
	system("PAUSE");
	return 0;
}
