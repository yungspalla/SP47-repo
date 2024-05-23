#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A[10][10];
  int i, j, n;
  srand(time(NULL));
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            if (j==i) {
                n=rand()%100;
                A[i][j] = n;
                } else {
                    A[i][j] = 0;
                    }
            }
        }
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            printf("%d ", A[i][j]);
            }
        printf("\n");
        }
  system("PAUSE");	
  return 0;
}
