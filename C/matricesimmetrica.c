#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A[10][10];
  int i, j, n, verifica=1;
  srand(time(NULL));
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            n=rand()%10;
            A[i][j] = n;
            }
        }
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
			if(A[i][j]!=A[j][i]) {
				verifica=0;
			}
          printf("%d ", A[i][j]);
        }
      printf("\n");
    }
  if (verifica==1) {
  	printf("\nLa matrice è simmetrica\n");
  } else {
  	printf("\nLa matrice non è simmetrica");
  }
  system("PAUSE");	
  return 0;
}

