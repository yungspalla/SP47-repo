#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A[4][4];
  int i, j;
  for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("\nInserisci elemento riga %d, colonna %d ", i, j);
            scanf("%d", &A[i][j]);
            }
        }
  for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("%d ", A[i][j]);
            }
        printf("\n");
        }
  system("PAUSE");	
  return 0;
}
