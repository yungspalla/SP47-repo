#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int prodotto, prezzo;
	printf("Inserire il numero del prodotto (1 = camicia, 2 = maglione, 3 = giacca) e il prezzo\n");
	scanf("%d", &prodotto);
	if (prodotto > 3 || prodotto < 1) {
		printf("PREZZO INACCETTABILE\n");
		return 0;
	}
	scanf("%d", &prezzo);
	if (prodotto == 1) {
		if (prezzo < 15 || prezzo > 50) {
			printf("PREZZO INACCETTABILE\n");
		} else {
			printf("PREZZO ACCETTABILE\n");
		}
	}
	if (prodotto == 2) {
		if (prezzo < 40 || prezzo > 200) {
			printf("PREZZO INACCETTABILE\n");
		} else {
			printf("PREZZO ACCETTABILE\n");
		}
	}
	if (prodotto == 3) {
		if (prezzo < 150 || prezzo > 500) {
			printf("PREZZO INACCETTABILE\n");
		} else {
			printf("PREZZO ACCETTABILE\n");
		}
	}
	system("PAUSE");
	return 0;
}
