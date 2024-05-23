#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x, n=1, i, tot=0;
  printf("Di quale numero vuoi trovare il quadrato?\n");
  scanf("%d", &x);
  for (i=0; i<x; i++) {
        tot = tot + n;
        n += 2;
        }
  printf("\nQuadrato di %d: %d\n", x, tot);
  system("PAUSE");	
  return 0;
}
