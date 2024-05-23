#include <stdio.h>
#include <math.h>
int main(){
    int n, cifre, i, deci;
	 printf("Quante cifre ha il numero binario?\n");
	 scanf("%d", &cifre);
	 i = cifre;
	 printf("Inserire le cifre da sinistra a destra\n");
	 while (i>0) {
	 	i--;	 
	 	scanf("%d", &n);
       deci = deci + (n*pow(2, i));
	 }
    printf("Numero in decimale: %d\n", deci);
    return 0;
}


contare numero elementi string: strlen(x);