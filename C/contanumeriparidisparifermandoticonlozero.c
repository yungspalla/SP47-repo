#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, a=0, b=0;
	printf("Inserisci diversi numeri e lo 0 per fermarti\n");
	scanf("%d" ,&n);
	while(n!=0) {
		if (n%2==0) {
			a++;
		} else {
			b++;
		}
		scanf("%d" ,&n);
	}
	printf("Numeri pari: %d\n", a);
	printf("Numeri dispari: %d\n", b);
	system("PAUSE");
	return 0;
}
