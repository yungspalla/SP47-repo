#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int h, w, verifica=0;
	printf("Inserisci altezza\n");
	scanf("%d", &h);
	printf("Inserisci peso\n");
	scanf("%d", &w);
	if (h>=50 && h<=200) {
		if (h>=50 && h<=100){
			if (w>=20 && w<=30){
				verifica = 1;
			}
		}
		if (h>=101 && h<=130){
			if (w>=30 && w<=40){
				verifica = 1;
			}
		}
		if (h>=131 && h<=150){
			if (w>=40 && w<=50){
				verifica = 1;
			}
		}
		if (h>=151 && h<=160){
			if (w>=50 && w<=60){
				verifica = 1;
			}
		}
		if (h>=161 && h<=170){
			if (w>=60 && w<=70){
				verifica = 1;
			}
		}
		if (h>=171 && h<=180){
			if (w>=70 && w<=80){
				verifica = 1;
			}
		}
		if (h>=181 && h<=190){
			if (w>=90 && w<=100){
				verifica = 1;
			}
		}
		if (h>=191 && h<=200){
			if (w>=101 && w<=110){
				verifica = 1;
			}
		}
	}
	if (verifica == 1) {
		printf("OK PESO FORMA\n");
	} else {
		printf("FUORI PESO FORMA\n");
	}
	system("pause");
	return 0;
}
