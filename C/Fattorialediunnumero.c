#include <stdio.h>
int main(){
    int n, tot=1, i;
	 printf("Inserisci un numero per trovarne l fattoriale\n");
	 scanf("%d" ,&n);
	 for (i=1; i<=n; i++) {
	 	tot = tot * i;
	 }
	 printf("Il fattoriale di %d è %d\n", n, tot);
    return 0;
}
