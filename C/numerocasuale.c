#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  srand(time(NULL));
  n=rand()%100;
  printf("%d", n);
  system("PAUSE");	
  return 0;
}
