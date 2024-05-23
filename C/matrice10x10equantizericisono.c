#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A[10][10];
  int i, j, n, zeri=0;
  srand(time(NULL));
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            n=rand()%10;
            A[i][j] = n;
            if (A[i][j]==0) zeri++;
            }
        }
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            printf("%d ", A[i][j]);
            }
        printf("\n");
        }
  printf("\nNella matrice ci sono %d zeri\n", zeri);
  system("PAUSE");	
  return 0;
}
