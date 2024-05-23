//scrivi un programma che dopo aver richiesto all'utente un numero intero, ne stampi tutti i divisori

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int n, i=1;
	printf("Inserisci un numero\n");
	scanf("%d", &n);
	while (n/i!=0) {
		if (n%i==0) {
			printf("%d è divisore di %d\n", i, n);
		}
		i++;
	}
	system("PAUSE");
	return 0;
}
