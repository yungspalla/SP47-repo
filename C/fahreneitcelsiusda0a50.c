#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float f=0, mult;
  int c=0;
  while (c<50) {
        f = (9.0/5.0)*c+32;
        printf("\nGradi Celsius: %d | Gradi Fahreneit: %f", c, f);
        c++;
        }
  system("PAUSE");	
  return 0;
}
