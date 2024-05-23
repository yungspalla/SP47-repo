#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int voto;
	printf("Inserire voto\n");
	scanf("%d", &voto);
	if (voto < 1 || voto > 10) {
		printf("VOTO NON POSSIBILE\n");
	} else if (voto < 6) {
		printf("VOTO INSUFFICIENTE\n");
	} else {
		printf("VOTO SUFFICIENTE\n");
		if (voto >= 7 && voto < 8) {
			printf("VOTO DISCRETO\n");
		} else if (voto >= 8 && voto < 9) {
			printf("VOTO BUONO\n");
		} else if (voto >= 9 && voto < 10) {
			printf("VOTO OTTIMO\n");
		} else if (voto == 10) {
			printf("VOTO ECCELLENTE\n");
		}
	}
	
	system("PAUSE");
	return 0;
}
