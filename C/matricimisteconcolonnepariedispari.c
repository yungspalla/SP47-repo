/*Modificare il programma che visualizzava solo numeri dispari con un programma che
visualizzi nelle colonne pari (colonna 0,2,4..) numeri casuali pari compresi tra 0 e 10 e che
visualizzi nelle colonne dispari (colonna 1,3,5..) numeri casuali dispari compresi tra 0 e 10.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A[10][10];
  int i, j, n;
  srand(time(NULL));
  for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            if (i%2==0) {
                    do {
                        n=rand()%10; 
                    } while(n%2!=0);
                } else {
                    do {
                        n=rand()%10; 
                    } while(n%2==0);
                    }
            A[j][i] = n;
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
