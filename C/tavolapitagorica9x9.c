/*Memorizzare in un array bidimensionale (matrice) 9 x 9 la tavola pitagorica, 
quella delle tabelline, e stampare il contenuto della matrice (nella prima riga 
si dovrà trovare la tabellina del 1: 1 2 3 4 5 6 7 8 9 10 etc.)*/
#include <stdio.h> 
#include <stdlib.h> 
int main(int argc, char *argv[]) { 
    int x = 0, y = 0, A[9][9]; 
    for (y = 0; y < 9; y++) { 
        for (x = 0; x < 9; x++) { 
            A[x][y] = (x + 1) * (y + 1);
             printf("%d ", A[x][y]); 
             } 
             printf("\n"); 
             } 
    system("PAUSE"); 
    return 0; 
}
