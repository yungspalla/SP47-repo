/*Scrivere un programma che, con un primo ciclo DO-WHILE, visualizzi i primi 10 
numeri interi positivi (0-9). Con un secondo ciclo subito dopo, questa volta di 
tipo WHILE-DO, visualizzare gli stessi numeri all’inverso (9-0). Usare una sola 
variabile, tra i due cicli NON CI DEVONO ESSERE ALTRE ISTRUZIONI.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n=0;
	do {
		printf("%d\n", n);
		n++;
	} while (n<=9);
	while (n>0) {
		n--;
		printf("%d\n", n);
	}
	system("PAUSE");
	return 0;
}
