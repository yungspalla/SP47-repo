#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A[10][10];
  int i, j, n, input, verifica=0;
  srand(time(NULL));
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            n=rand()%100;
            A[i][j] = n;
            }
        }
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            printf("%d ", A[i][j]);
            }
        printf("\n");
        }
  printf("\n\nInserisci un numero\n");
  scanf("%d",&input);
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            if (A[i][j]==input) verifica=1;
            }
        }
  if (verifica==1) {
        printf("\n%d è presente nella matrice\n", input);
        } else {
            printf("\n%d non è presente nella matrice\n", input);
            }
  system("PAUSE");	
  return 0;
}
